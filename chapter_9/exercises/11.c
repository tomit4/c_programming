float compute_GPA(char grades[], int n)
{
	int i;
	float sum = 0;
	;

	for (i = 0; i < n; i++) {
		switch (grades[i]) {
		case 'A':
			sum += 4;
			break;
		case 'B':
			sum += 3;
			break;
		case 'C':
			sum += 2;
			break;
		case 'D':
			sum += 1;
			break;
		default:
			break;
		}
	}

	return (n > 0) ? (sum / n) : 0;
}
