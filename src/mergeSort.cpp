#include <vector>


std::vector<int> slice(const std::vector<int>v, int start=0, int end=-1) {
    int oldlen = v.size();
    int newlen;

    if (end == -1 or end >= oldlen){
        newlen = oldlen-start;
    } else {
        newlen = end-start;
    }

    std::vector<int> nv(newlen);

    for (int i = 0; i < newlen; i++) {
        nv[i] = v[start+i];
    }
    return nv;
}

std::vector<int> mergeSort(std::vector<int> &v) {
    int vec_size = v.size();
    
    if (vec_size > 1) {
        int i, j, k;
        int mid = vec_size / 2;
        std::vector<int> v1 = slice(v, 0, mid);
        std::vector<int> v2 = slice(v, mid + 1, vec_size);

        std::vector<int> vec_merged;
        vec_merged = std::vector<int>(vec_size);

        int v1_size = v1.size();
        int v2_size = v2.size();

        v1 = mergeSort(v1);
        v2 = mergeSort(v2);

        i = 0;
        j = 0;
        k = 0;
        while (i < v1_size & j < v2_size) {
            if (v1[i] <= v2[j]) {
                vec_merged[k] = v1[i];
                i ++;
            } else {
                vec_merged[k] = v2[j];
                j++;
            }
            k++;
        }
        return(vec_merged);
    } else {
        return(v);
    }
}