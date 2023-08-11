vector<vector<int>> pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int>> temp={{1}};
 
        vector<int>vec;
        vec.push_back(1);
        vec.push_back(1);
        temp.push_back(vec);
 

    for(int i =2;i<N;i++){
        vector<int>vec;
          vec.push_back(1);
        for(int j =0;j<i-1;j++){
         int sum =  temp[i-1][j]+temp[i-1][j+1];
         vec.push_back(sum);
           
        }
          vec.push_back(1);
         temp.push_back(vec);
    }
    return temp;
}
