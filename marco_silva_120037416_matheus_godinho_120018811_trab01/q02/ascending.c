void ascendingOrder(int * array, int n){
   
    int lower = 0, aux;
    for(int i=n-1; i >= 1; i--) {  
        for(int j=0; j < i ; j++){
            if(array[j]>array[j+1]){
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }
} 
