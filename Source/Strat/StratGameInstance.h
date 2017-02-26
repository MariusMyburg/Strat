// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Networking.h"
#include "Engine/GameInstance.h"
#include "StratGameInstance.generated.h"



/**
 * 
 */
UCLASS()
class STRAT_API UStratGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
		UStratGameInstance()
	{
		m_Ints.Add(1);
		m_Ints.Add(4);
	}
	
	UFUNCTION(BlueprintCallable)
	int GetAliens()
	{
		/*FSocket* Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
		FString address = TEXT("127.0.0.1");
		int32 port = 49907;
		FIPv4Address ip;
		FIPv4Address::Parse(address, ip);


		auto addr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
		addr->SetIp(ip.Value);
		addr->SetPort(port);

		bool connected = Socket->Connect(*addr);

		FString serialized = TEXT("GET api/values");
		TCHAR *serializedChar = serialized.GetCharArray().GetData();
		int32 size = FCString::Strlen(serializedChar);
		int32 sent = 0;

		bool successful = Socket->Send((uint8*)TCHAR_TO_UTF8(serializedChar), size, sent);
		uint32 pds = 0;
		bool bd = Socket->HasPendingData(pds);*/
		
		return m_Ints.Num();
	}



private:
	TArray<int32> m_Ints;
	
};
