#pragma once

#include <string>
#include <vector>
#include <iostream>
#include <cctype>

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

namespace caesarcipher
{

	/// 
	/// <summary>
	/// @author James Gagnon
	/// </summary>
	class CaesarCipher
	{

		/// <param name="args"> the command line arguments </param>
		static void main(std::vector<std::wstring> &args)
		{
		   std::wstring s1 = std::wstring(L"Xlmw irgvCtxih qiwweki wlepp gpevmjC lsA RSX xs irgvCtx e qiwweki xsheC! Izir mj mx\n") + std::wstring(L"Aew wyjjmgmirx efsyx 6444 Cievw eks, sv xs fi qsvi tvigmwi mr xli Ciev 88 FG, rsAeheCw\n") + std::wstring(L"mx mw rsx. XsheC iegl ws-geppih Wgvmtx Omhhmi Asyph fi efpi xs kix wirwmxmzi\n") + std::wstring(L"mrjsvqexmsr, mj xliC Aivi irgvCtxih xlmw AeC.");
		  // String s2 = "CSYEVIXIVQMREXIH";

		   std::wcout << std::wstring(L"Answer One:") << std::endl;
		   for (int i = 0; i < 5;i++)
		   {
			   std::wcout << i << std::wstring(L" ");
			   std::wcout << decrypt(s1, i) << std::endl;
		   }

	//          System.out.println("Answer Two:");
	//       for (int i =0; i<26;i++){
	//           System.out.print(i+ " ");
	//           System.out.println(decrypt(s2, i));
	//       }
		}
  public:
	  static std::wstring decrypt(const std::wstring &str, int key)
	  {
			std::wstring decrypted = L"";
			for (int i = 0; i < str.length(); i++)
			{
				int c = str[i];
				if (std::isupper(c))
				{
					c = c - (key % 62);
					if (c < L'A')
					{
					c = c + 62;
					}
				}
				else if (std::islower(c))
				{
					c = c - (key % 62);
					if (c < L'a')
					{
					c = c + 62;
					}
				}
				decrypted += static_cast<wchar_t>(c);
			}
			return decrypted;
	  }
	};

}
