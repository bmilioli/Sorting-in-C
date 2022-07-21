/*****EN*****
vet = The vector with the values that you want to sort
vCount = The vectot the with the values sorted
n = Number of elements in the vector
max = The max value of the elements of the vector
***/

/*****PT-BT*****
vet = O vetor que contem os valores que se deseja ordenar
vCount = O vetor com os valores ordenados
n = número de elementos do vetor
max = O valor máximo dos elementos do vetor 
***/

void countingSort(int *vet, int *vCount, int n, int max){
	int  i;
	for(i=0; i<=max; i++)
		vCount[i] = 0;
	for(i=0;i<n;i++)
		vCount[vet[i]]++;
}
