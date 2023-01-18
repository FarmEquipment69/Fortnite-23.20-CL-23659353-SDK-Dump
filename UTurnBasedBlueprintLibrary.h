// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size: 0x28
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject (Underlying native function: RegisterTurnBasedMatchInterfaceObject 0x6e72fa0)
	static void RegisterTurnBasedMatchInterfaceObject(class UObject*& WorldContextObject, class APlayerController*& PlayerController, class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName (Underlying native function: GetPlayerDisplayName 0x6e729ec)
	static void GetPlayerDisplayName(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FString& MatchID, int& PlayerIndex, struct FString& PlayerDisplayName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex (Underlying native function: GetMyPlayerIndex 0x6e727cc)
	static void GetMyPlayerIndex(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FString& MatchID, int& PlayerIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn (Underlying native function: GetIsMyTurn 0x6e725ac)
	static void GetIsMyTurn(class UObject*& WorldContextObject, class APlayerController*& PlayerController, struct FString& MatchID, bool& bIsMyTurn); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

