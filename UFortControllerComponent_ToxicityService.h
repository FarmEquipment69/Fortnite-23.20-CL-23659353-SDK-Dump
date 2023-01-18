// Class /Script/FortniteGame.FortControllerComponent_ToxicityService
// Size: 0x160
class UFortControllerComponent_ToxicityService : public UFortControllerComponent
{
	unsigned char unreflected_160[0x160]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_ToxicityService.ServerSanitizeStrings (Underlying native function: ServerSanitizeStrings 0x86e9d94)
	void ServerSanitizeStrings(struct TArray<struct FString>& StringsToSanitize, int& RequestId); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_ToxicityService.ServerSanitizeString (Underlying native function: ServerSanitizeString 0x86e9bf8)
	void ServerSanitizeString(struct FString& StringToSanitize, int& RequestId); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_ToxicityService.ClientReturnSanitizedStrings (Underlying native function: ClientReturnSanitizedStrings 0x86e8acc)
	void ClientReturnSanitizedStrings(bool& bSuccess, struct TArray<struct FString>& SanitizedStrings, int& RequestId); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_ToxicityService.ClientReturnSanitizedString (Underlying native function: ClientReturnSanitizedString 0x86e88e8)
	void ClientReturnSanitizedString(bool& bSuccess, struct FString& SanitizedString, int& RequestId); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

