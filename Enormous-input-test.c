// Note that this problem is for testing fast input-output.
#include <stdio.h> 

int main() {
	
	int n, k;
	scanf("%d %d", &n, &k);
	int count=0;
	for(int i=0;i<n;i++){
	    int t;
	    scanf("%d",&t);
	    	if (t % k == 0) {
			count++;
		}		
	}

	// Print the ans.
	printf("%d\n", count);
	
	return 0;
}

