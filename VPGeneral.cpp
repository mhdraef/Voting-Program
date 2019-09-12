//Voting Program in C++
//Codes to be used by the officials:
//Use code: "result" to see the results of the election and code: "continue" to go the next voter. 

//Header Files Used
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

//For Head Boy
void HB_CandidateList();
int HB_InputVote();
int HB_UpdatePoll();
void HB_Results();
int HB_VoteArray[5];

//For Assistant Head Boy
void aHB_CandidateList();
int aHB_InputVote();
int aHB_UpdatePoll();
void aHB_Results();
int aHB_VoteArray[5];

//For Sports Captain
void SC_CandidateList();
int SC_InputVote();
int SC_UpdatePoll();
void SC_Results();
int SC_VoteArray[5];

//For Assistant Sports Captain
void aSC_CandidateList();
int aSC_InputVote();
int aSC_UpdatePoll();
void aSC_Results();
int aSC_VoteArray[5];

//For House Captain
void HC_CandidateList();
int HC_InputVote();
int HC_UpdatePoll();
void HC_Results();
int HC_VoteArray[5];

//For Assistant House Captain
void aHC_CandidateList();
int aHC_InputVote();
int aHC_UpdatePoll();
void aHC_Results();
int aHC_VoteArray[5];

int totalvotes=0;

//For Results File
ofstream fout;

//Main Program

int main()
{
	for(int loop=0; loop<5; ++loop)
	{
		HB_VoteArray[loop]=0;
		aHB_VoteArray[loop]=0;
		SC_VoteArray[loop]=0;
		aSC_VoteArray[loop]=0;
		HC_VoteArray[loop]=0;
		aHC_VoteArray[loop]=0;
	}
	next: 
		system("cls");
		cout<<"\n\n\n\n\n\n\n\n\n";
		cout<<"================================================================================"<<endl;
		cout<<"==================== NAWIS Student Council Voting System ======================="<<endl;
        cout<<"====================              (2017-18)              ======================="<<endl;
	    cout<<"================================================================================"<<endl<<endl;
	    cout<<"\t\t\t";system("pause");
	    system("cls");
    
	string code;
	
	HB_CandidateList();
	int HB_option=HB_UpdatePoll();
	system("cls");
		
	aHB_CandidateList();
	int aHB_option=aHB_UpdatePoll();
	system("cls");
		
	SC_CandidateList();
	int SC_option=SC_UpdatePoll();
	system("cls");
		
	aSC_CandidateList();
	int aSC_option=aSC_UpdatePoll();
	system("cls");
		
	HC_CandidateList();
	int HC_option=HC_UpdatePoll();
	system("cls");
		
	aHC_CandidateList();
	int aHC_option=aHC_UpdatePoll();
	system("cls");
		
    cout<<"\n\n\n\n\n\n\n\n\tThank you for voting. Please hand over the system to the official.\n\n";

    label:
	cin>>code;
if(code=="result")
{
system("cls");

fout.open("results.txt");
fout<<"Total Number of Votes:"<<totalvotes<<endl<<endl;
HB_Results();
aHB_Results();
SC_Results();
aSC_Results();
HC_Results();
aHC_Results();

fout.close();

system("pause");
return 0;
}

else if(code=="continue")
{ goto next;
}


    else
	{
	    cout<<"_________________________________________________________"<<endl<<endl
		    <<"Please hand over the computer to the designated official."
		    <<"_________________________________________________________"<<endl<<endl;
		goto label;
    }
}
//Function Definitions I

void HB_CandidateList()
	{
	cout<<"\t\t______________________________________"<<endl<<endl
	    <<"\t\t*List of students running as Head Boy*"<<endl
	    <<"\t\t______________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for HB_Candidate1."<<endl
		<<"Press 2 for HB_Candidate2."<<endl
		<<"Press 3 for HB_Candidate3."<<endl
		<<"Press 4 for HB_Candidate4."<<endl<<endl;
	}

void aHB_CandidateList()
	{
	cout<<"\t\t________________________________________________"<<endl<<endl
		<<"\t\t*List of students running as Assistant Head Boy*"<<endl
		<<"\t\t________________________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for aHB_Candidate1."<<endl
		<<"Press 2 for aHB_Candidate2."<<endl
		<<"Press 3 for aHB_Candidate3."<<endl
		<<"Press 4 for aHB_Candidate4."<<endl<<endl;
	}
	
void SC_CandidateList()
	{
	cout<<"\t\t____________________________________________"<<endl<<endl
		<<"\t\t*List of students running as Sports Captain*"<<endl
		<<"\t\t____________________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for SC_Candidate1."<<endl
		<<"Press 2 for SC_Candidate2."<<endl
		<<"Press 3 for SC_Candidate3."<<endl
		<<"Press 4 for SC_Candidate4."<<endl<<endl;
	}

void aSC_CandidateList()
	{
	cout<<"\t\t______________________________________________________"<<endl<<endl
		<<"\t\t*List of students running as Assistant Sports Captain*"<<endl
		<<"\t\t______________________________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for aSC_Candidate1."<<endl
		<<"Press 2 for aSC_Candidate2."<<endl
		<<"Press 3 for aSC_Candidate3."<<endl
		<<"Press 4 for aSC_Candidate4."<<endl<<endl;
	}
	
void HC_CandidateList()
	{
	cout<<"\t\t___________________________________________________"<<endl<<endl
		<<"\t\t*List of students running as General House Captain*"<<endl
		<<"\t\t___________________________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for HC_Candidate1."<<endl
		<<"Press 2 for HC_Candidate2."<<endl
		<<"Press 3 for HC_Candidate3."<<endl
		<<"Press 4 for HC_Candidate4."<<endl<<endl;
	}

void aHC_CandidateList()
	{
	cout<<"\t_____________________________________________________________"<<endl<<endl
		<<"\t*List of students running as Assistant General House Captain*"<<endl
		<<"\t_____________________________________________________________"<<endl<<endl<<endl
		<<"Options are:"<<endl<<endl
		<<"Press 1 for aHC_Candidate1."<<endl
		<<"Press 2 for aHC_Candidate2."<<endl
		<<"Press 3 for aHC_Candidate3."<<endl
		<<"Press 4 for aHC_Candidate4."<<endl<<endl;
	}
	
//Function Defintions II

int HB_InputVote()
{
	char HB_option;
	cin>>HB_option;
	totalvotes++;
	return HB_option;
};

int aHB_InputVote()
{
	char aHB_option;
	cin>>aHB_option;
	return aHB_option;
};

int SC_InputVote()
{
	char SC_option;
	cin>>SC_option;
	return SC_option;
};

int aSC_InputVote()
{
	char aSC_option;
	cin>>aSC_option;
	return aSC_option;
};

int HC_InputVote()
{
	char HC_option;
	cin>>HC_option;
	return HC_option;
};

int aHC_InputVote()
{
	char aHC_option;
	cin>>aHC_option;
	return aHC_option;
};

//Function Defintions III

int HB_UpdatePoll()
{
	error:
	int HB_option;

	HB_option=HB_InputVote();
	
	if ((HB_option=='1') || (HB_option=='2') || (HB_option=='3') || (HB_option=='4'))
	{
	
	switch (HB_option)
	{
		case '1':
			HB_VoteArray[1]++;
			break;

		case '2':
			HB_VoteArray[2]++;
			break;

		case '3':
			HB_VoteArray[3]++;
			break;

		case '4':
			HB_VoteArray[4]++;
			break;


	}
	return HB_option;
}
 else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
	 HB_CandidateList();
     goto error;  
 }	
}

int aHB_UpdatePoll()
{
	error:
	int aHB_option;

	aHB_option=aHB_InputVote();

	if ((aHB_option=='1') || (aHB_option=='2') || (aHB_option=='3') || (aHB_option=='4'))
{

	switch (aHB_option)
	{
		case '1':
			aHB_VoteArray[1]++;
			break;

		case '2':
			aHB_VoteArray[2]++;
			break;

		case '3':
			aHB_VoteArray[3]++;
			break;

		case '4':
			aHB_VoteArray[4]++;
			break;
	}
	return aHB_option;

}
 else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
     aHB_CandidateList();
	 goto error;  
 }
}

int SC_UpdatePoll()
{				
		error:
	int SC_option;

	SC_option=SC_InputVote();

	if ((SC_option=='1') || (SC_option=='2') || (SC_option=='3') || (SC_option=='4'))
{
	switch (SC_option)
	{
		case '1':
			SC_VoteArray[1]++;
			break;

		case '2':
			SC_VoteArray[2]++;
			break;

		case '3':
			SC_VoteArray[3]++;
			break;

		case '4':
			SC_VoteArray[4]++;
			break;
	}
	return SC_option;

}
 else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
     SC_CandidateList();
	 goto error;  
 }

}

int aSC_UpdatePoll()
{
	error:
	int aSC_option;

	aSC_option=aSC_InputVote();

	if ((aSC_option=='1') || (aSC_option=='2') || (aSC_option=='3') || (aSC_option=='4'))
{

	switch (aSC_option)
	{
		case '1':
			aSC_VoteArray[1]++;
			break;

		case '2':
			aSC_VoteArray[2]++;
			break;

		case '3':
			aSC_VoteArray[3]++;
			break;

		case '4':
			aSC_VoteArray[4]++;
			break;

     }
	
	return aSC_option;
}
 else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
     aSC_CandidateList();
	 goto error;  
 }
}

int HC_UpdatePoll()
{
error:
	int HC_option;

	HC_option=HC_InputVote();

	if ((HC_option=='1') || (HC_option=='2') || (HC_option=='3') || (HC_option=='4'))
{
	switch (HC_option)
	{
		case '1':
			HC_VoteArray[1]++;
			break;

		case '2':
			HC_VoteArray[2]++;
			break;

		case '3':
			HC_VoteArray[3]++;
			break;

		case '4':
			HC_VoteArray[4]++;
			break;
	}
	return HC_option;
}
 else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
     HC_CandidateList();
	 goto error;  
 }
}

int aHC_UpdatePoll()
{	
	error:
	int aHC_option;

	aHC_option=aHC_InputVote();

	if ((aHC_option=='1') || (aHC_option=='2') || (aHC_option=='3') || (aHC_option=='4'))
{
	switch (aHC_option)
	{
		case '1':
			aHC_VoteArray[1]++;
			break;

		case '2':
			aHC_VoteArray[2]++;
			break;

		case '3':
			aHC_VoteArray[3]++;
			break;

		case '4':
			aHC_VoteArray[4]++;
			break;
	}
	return aHC_option;
}
  else
  	{
     system("cls");
	 cout<<endl<<"Illegal entry, please re-enter."<<endl<<endl;
     aHC_CandidateList();
	 goto error;  
 }
}

//Function Defintions IV

void HB_Results()
{
	
	int loop=0;
	
	fout<<"\t\tFor The Head Boy Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"HB_Candidate1:"<<HB_VoteArray[1]<<endl;

	fout<<"HB_Candidate2:"<<HB_VoteArray[2]<<endl;

	fout<<"HB_Candidate3:"<<HB_VoteArray[3]<<endl;

	fout<<"HB_Candidate4:"<<HB_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	


	if(HB_VoteArray[1]>HB_VoteArray[2]&&HB_VoteArray[1]>HB_VoteArray[3]&&HB_VoteArray[1]>HB_VoteArray[4])	
		fout<<"The elected Head Boy is HB_Candidate1"<<endl<<endl<<endl<<endl;
	else if(HB_VoteArray[2]>HB_VoteArray[1]&&HB_VoteArray[2]>HB_VoteArray[3]&&HB_VoteArray[2]>HB_VoteArray[4])
		fout<<"The elected Head Boy is HB_Candidate2"<<endl<<endl<<endl<<endl;
	else if(HB_VoteArray[3]>HB_VoteArray[1]&&HB_VoteArray[3]>HB_VoteArray[2]&&HB_VoteArray[3]>HB_VoteArray[4])
		fout<<"The elected Head Boy is HB_Candidate3"<<endl<<endl<<endl<<endl;
	else if(HB_VoteArray[4]>HB_VoteArray[1]&&HB_VoteArray[4]>HB_VoteArray[2]&&HB_VoteArray[4]>HB_VoteArray[3])
		fout<<"The elected Head Boy is HB_Candidate4"<<endl<<endl<<endl<<endl;
	else
        fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}

void aHB_Results()
{
	int loop=0;

	fout<<"\t\tFor The Asst.Head Boy Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"aHB_Candidate1:"<<aHB_VoteArray[1]<<endl;

	fout<<"aHB_Candidate2:"<<aHB_VoteArray[2]<<endl;

	fout<<"aHB_Candidate3:"<<aHB_VoteArray[3]<<endl;

	fout<<"aHB_Candidate4:"<<aHB_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	


	if(aHB_VoteArray[1]>aHB_VoteArray[2]&&aHB_VoteArray[1]>aHB_VoteArray[3]&&aHB_VoteArray[1]>aHB_VoteArray[4])	
		fout<<"The elected Asst.Head Boy is aHB_Candidate1"<<endl<<endl<<endl<<endl;
	else if(aHB_VoteArray[2]>aHB_VoteArray[1]&&aHB_VoteArray[2]>aHB_VoteArray[3]&&aHB_VoteArray[2]>aHB_VoteArray[4])
		fout<<"The elected Asst.Head Boy is aHB_Candidate2"<<endl<<endl<<endl<<endl;
	else if(aHB_VoteArray[3]>aHB_VoteArray[1]&&aHB_VoteArray[3]>aHB_VoteArray[2]&&aHB_VoteArray[3]>aHB_VoteArray[4])
		fout<<"The elected Asst.Head Boy is aHB_Candidate3"<<endl<<endl<<endl<<endl;
	else if(aHB_VoteArray[4]>aHB_VoteArray[1]&&aHB_VoteArray[4]>aHB_VoteArray[2]&&aHB_VoteArray[4]>aHB_VoteArray[3])
		fout<<"The elected Asst.Head Boy is aHB_Candidate4"<<endl<<endl<<endl<<endl;
	else
        fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}

void SC_Results()
{
	int loop=0;

	fout<<"\t\tFor The Sports Captain Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"SC_Candidate1:"<<SC_VoteArray[1]<<endl;

	fout<<"SC_Candidate2:"<<SC_VoteArray[2]<<endl;

	fout<<"SC_Candidate3:"<<SC_VoteArray[3]<<endl;

	fout<<"SC_Candidate4:"<<SC_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	


	if(SC_VoteArray[1]>SC_VoteArray[2]&&SC_VoteArray[1]>SC_VoteArray[3]&&SC_VoteArray[1]>SC_VoteArray[4])	
		fout<<"The elected Sports Captain is SC_Candidate1"<<endl<<endl<<endl<<endl;
	else if(SC_VoteArray[2]>SC_VoteArray[1]&&SC_VoteArray[2]>SC_VoteArray[3]&&SC_VoteArray[2]>SC_VoteArray[4])
		fout<<"The elected Sports Captain is SC_Candidate2"<<endl<<endl<<endl<<endl;
	else if(SC_VoteArray[3]>SC_VoteArray[1]&&SC_VoteArray[3]>SC_VoteArray[2]&&SC_VoteArray[3]>SC_VoteArray[4])
		fout<<"The elected Sports Captain is SC_Candidate3"<<endl<<endl<<endl<<endl;
	else if(SC_VoteArray[4]>SC_VoteArray[1]&&SC_VoteArray[4]>SC_VoteArray[2]&&SC_VoteArray[4]>SC_VoteArray[3])
		fout<<"The elected Sports Captain is SC_Candidate4"<<endl<<endl<<endl<<endl;
	else
        fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}

void aSC_Results()
{
	int loop=0;

	fout<<"\t\tFor The Asst.Sports Captain Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"aSC_Candidate1:"<<aSC_VoteArray[1]<<endl;

	fout<<"aSC_Candidate2:"<<aSC_VoteArray[2]<<endl;

	fout<<"aSC_Candidate3:"<<aSC_VoteArray[3]<<endl;

	fout<<"aSC_Candidate4:"<<aSC_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	


	if(aSC_VoteArray[1]>aSC_VoteArray[2]&&aSC_VoteArray[1]>aSC_VoteArray[3]&&aSC_VoteArray[1]>aSC_VoteArray[4])	
		fout<<"The elected Asst.Sports Captain is aSC_Candidate1"<<endl<<endl<<endl<<endl;
	else if(aSC_VoteArray[2]>aSC_VoteArray[1]&&aSC_VoteArray[2]>aSC_VoteArray[3]&&aSC_VoteArray[2]>aSC_VoteArray[4])
		fout<<"The elected Asst.Sports Captain is aSC_Candidate2"<<endl<<endl<<endl<<endl;
	else if(aSC_VoteArray[3]>aSC_VoteArray[1]&&aSC_VoteArray[3]>aSC_VoteArray[2]&&aSC_VoteArray[3]>aSC_VoteArray[4])
		fout<<"The elected Asst.Sports Captain is aSC_Candidate3"<<endl<<endl<<endl<<endl;
	else if(aSC_VoteArray[4]>aSC_VoteArray[1]&&aSC_VoteArray[4]>aSC_VoteArray[2]&&aSC_VoteArray[4]>aSC_VoteArray[3])
		fout<<"The elected Asst.Sports Captain is aSC_Candidate4"<<endl<<endl<<endl<<endl;
	else
        fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}

void HC_Results()
{
	int loop=0;

	fout<<"\t\tFor The General House Captain Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"HC_Candidate1:"<<HC_VoteArray[1]<<endl;

	fout<<"HC_Candidate2:"<<HC_VoteArray[2]<<endl;

	fout<<"HC_Candidate3:"<<HC_VoteArray[3]<<endl;

	fout<<"HC_Candidate4:"<<HC_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	

	if(HC_VoteArray[1]>HC_VoteArray[2]&&HC_VoteArray[1]>HC_VoteArray[3]&&HC_VoteArray[1]>HC_VoteArray[4])	
		fout<<"The elected General House Captain is HC_Candidate1"<<endl<<endl<<endl<<endl;
	else if(HC_VoteArray[2]>HC_VoteArray[1]&&HC_VoteArray[2]>HC_VoteArray[3]&&HC_VoteArray[2]>HC_VoteArray[4])
		fout<<"The elected General House Captain is HC_Candidate2"<<endl<<endl<<endl<<endl;
	else if(HC_VoteArray[3]>HC_VoteArray[1]&&HC_VoteArray[3]>HC_VoteArray[2]&&HC_VoteArray[3]>HC_VoteArray[4])
		fout<<"The elected General House Captain is HC_Candidate3"<<endl<<endl<<endl<<endl;
	else if(HC_VoteArray[4]>HC_VoteArray[1]&&HC_VoteArray[4]>HC_VoteArray[2]&&HC_VoteArray[4]>HC_VoteArray[3])
		fout<<"The elected General House Captain is HC_Candidate4"<<endl<<endl<<endl<<endl;
	else
	    fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}

void aHC_Results()
{
	int loop=0;

	fout<<"\t\tFor The Asst. General House Captain Position"<<endl<<endl
	<<"Vote Distribution: "<<endl<<endl;

	fout<<"aHC_Candidate1:"<<aHC_VoteArray[1]<<endl;

	fout<<"aHC_Candidate2:"<<aHC_VoteArray[2]<<endl;

	fout<<"aHC_Candidate3:"<<aHC_VoteArray[3]<<endl;

	fout<<"aHC_Candidate4:"<<aHC_VoteArray[4]<<endl;


	fout<<endl<<"--------------------------"<<endl;
	

	if(aHC_VoteArray[1]>aHC_VoteArray[2]&&aHC_VoteArray[1]>aHC_VoteArray[3]&&aHC_VoteArray[1]>aHC_VoteArray[4])	
		fout<<"The elected Asst. General House Captain is aHC_Candidate1"<<endl<<endl<<endl<<endl;
	else if(aHC_VoteArray[2]>aHC_VoteArray[1]&&aHC_VoteArray[2]>aHC_VoteArray[3]&&aHC_VoteArray[2]>aHC_VoteArray[4])
		fout<<"The elected Asst. General House Captain is aHC_Candidate2"<<endl<<endl<<endl<<endl;
	else if(aHC_VoteArray[3]>aHC_VoteArray[1]&&aHC_VoteArray[3]>aHC_VoteArray[2]&&aHC_VoteArray[3]>aHC_VoteArray[4])
		fout<<"The elected Asst. General House Captain is aHC_Candidate3"<<endl<<endl<<endl<<endl;
	else if(aHC_VoteArray[4]>aHC_VoteArray[1]&&aHC_VoteArray[4]>aHC_VoteArray[2]&&aHC_VoteArray[4]>aHC_VoteArray[3])
		fout<<"The elected Asst. General House Captain is aHC_Candidate4"<<endl<<endl<<endl<<endl;	
    else
        fout<<"The votes are tied."<<endl<<endl<<endl<<endl;
}
//End Of Program
