using System;
namespace Program{
	class Algorithm{
		static void Main(){
		
			ulong Number = (ulong)1E+6+1, CandidateNumber = 0;
			ulong Length = 1, CandidateLength = 0;

			while(--Number > 0){
			
				Length = 1;
				CollatzSeries(Number, ref Length);

				if(Length > CandidateLength){
				
					CandidateLength = Length;
					CandidateNumber = Number;
				}
			}

			Console.WriteLine("Length: {0}\nNumber: {1}",CandidateLength, CandidateNumber);
		}

		static bool IsEven(ulong N){
			return  (N % 2 == 0);
		}

		static void CollatzSeries(ulong N, ref ulong L){
			while(N > 1){
			
				L++;
				N = IsEven(N) ? N / 2 : 3 * N + 1;
			}
		}
	}
}
