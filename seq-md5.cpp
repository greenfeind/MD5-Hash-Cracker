#include <algorithm>
#include <cstring>
#include <ctime>
#include <iostream>
#include <fstream>
#include <limits.h>
#include <map>
#include <numeric> 
#include <set>
#include <sstream>
#include <string>
#include <vector>

#include "md5.h"
#define PLEN_SIZE 6
using namespace std;

int test_hash(std::string hString, std::string tString){

	MD5 md5;
	char *tstr = new char[tString.length() + 1];
	strcpy(tstr, tString.c_str());
	if ( hString == md5.digestString(tstr) ){
		std::cout << "Match found: " << tString << std::endl; 
		return 10;}
		else { return 1; }
}

int main(int argc, char *argv[]){
	
	char cars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int carlen = 63;
	int tPassLen = 1;
	MD5 md5;
	std::string utString;
	std::string uHash;
	std::string tHash;
	std::string tPass;
	std::clock_t start;
	int test_res = 2;
	int least_num = 1 ;
	int max_num = 6;
	int num_ascii=256;
	char pLen[PLEN_SIZE];
	
	
	std::cout << "This program makes use of the md5.h file available from: \n";
	std::cout << "github.com/Ex094/HashcrackerV.2/blob/master/md5.h\n\n";
	std::cout << "Enter a MD5 hash to be cracked: " << std::endl; 
	std::cin >> uHash;
	
	start = std::clock();
	
	for(int i = 0 ; i < carlen ; i++){
		for(int j = 0 ; j < carlen ; j++){
			for(int k = 0 ; k < carlen ; k++){
				for(int l = 0 ; l < carlen ; l++){
					for(int m = 0 ; m < carlen ; m++){
						for(int n = 63 ; n < carlen ; n++){
							for(int o = 63 ; o < carlen ; o++){
								for(int p = 63 ; p < carlen ; p++){
									std::stringstream sstr;
									sstr << cars[i] << cars[j] << cars[k] << cars[l]; 
									sstr << cars[m] << cars[n] << cars[o] << cars[p];
									std::string tPass = sstr.str();
									std::cout << tPass;
									//char* tePass = cars[i]+cars[j]+cars[k]+cars[l]+cars[m]+cars[n]+cars[o]+cars[p]+std::endl;
		}}}}}}}
	}
	std::cout << "Time: " << (std::clock() - start)/(double)(CLOCKS_PER_SEC/1000) << " ms" << std::endl;
	
	return 0; 
			}
