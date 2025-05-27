 if(!st.empty()){
        for(int i=0; i< arr.size(); i++){
                int idx = count;
                while(!st.empty() && arr[i] < st.top()){
                    if(ans[idx] != -1) {
                        idx--;
                        continue;
                    }
                    ans[idx] = arr[i];
                    idx--;
                    st.pop();
                }
        }
    }