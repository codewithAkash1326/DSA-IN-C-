#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Binary search function to find the index of a song in the sorted array
int binarySearch(const vector<string>& songs, const string& target) {
    int left = 0;
    int right = songs.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (songs[mid] == target) {
            return mid; // Song found, return its index
        } else if (songs[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Song not found
}

int main() {
    int n;
    cout << "Enter the number of songs: ";
    cin >> n;

    vector<string> songs(n);
    cout << "Enter the sorted array of song titles: ";
    for (int i = 0; i < n; i++) {
        cin >> songs[i];
    }

    string target;
    cout << "Enter the song title to search: ";
    cin.ignore(); // Ignore newline character
    getline(cin, target);

    int index = binarySearch(songs, target);

    if (index != -1) {
        cout << "Index of the song \"" << target << "\" is: " << index << endl;
    } else {
        cout << "Song \"" << target << "\" not found in the playlist." << endl;
    }

    return 0;
}
