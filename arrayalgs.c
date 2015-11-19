int binarySearch(int key, int array[],int sz){
	int mid;  //index of middle of part of array
	          //we want to search
	int lowIdx = 0;  //index of first element where key may be
	int highIdx = sz-1; //index of last element where key may be
	int rc=-1;
	while(rc == -1 && lowIdx <= highIdx){
		mid = (lowIdx + highIdx)/2;
		if(key == array[mid]){
			rc=mid;
		}
		else if (key < array[mid]){
			highIdx = mid-1;
		}
		else{
			lowIdx = mid + 1;
		}
	}
	return rc;
}

int linearSearch(int key, int array[],int sz){
	int rc=-1;
	int i;
	for (i=0;i<sz && rc==-1;i++){
		if(array[i]==key){
			rc=i;
		}
	}
	return rc
}

int getMinMax()