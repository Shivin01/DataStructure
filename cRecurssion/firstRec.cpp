if (str1.length() != str2.length()) {
        return false;
    }

    // Vector to store the indices of mismatches
    std::vector<int> mismatchIndices;

    // Identify mismatches
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            mismatchIndices.push_back(i);
        }
    }

    // Check the number of mismatches
    if (mismatchIndices.size() != 2) {
        return false;
    }

    // Check if swapping the mismatched characters makes the strings identical
    int i = mismatchIndices[0];
    int j = mismatchIndices[1];

    return str1[i] == str2[j] && str1[j] == str2[i];