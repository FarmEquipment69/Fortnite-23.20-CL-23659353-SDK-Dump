// Class /Script/FortniteUI.AthenaSpectateMatchModalBase
// Size: 0x568
class UAthenaSpectateMatchModalBase : public UFortActivatablePanel
{
	unsigned char unreflected_568[0x568]; 

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.JoinGameSession (Underlying native function: JoinGameSession 0xa5bb40c)
	void JoinGameSession(struct FString& GameSessionIdStr); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.JoinFriendSession (Underlying native function: JoinFriendSession 0xa5bb2b8)
	void JoinFriendSession(struct FString& FriendName); // (Final | Native | Protected | BlueprintCallable | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.IsGameSessionString (Underlying native function: IsGameSessionString 0xa5bb140)
	bool IsGameSessionString(struct FString& String); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.GetFriendNames (Underlying native function: GetFriendNames 0xa5b8ebc)
	void GetFriendNames(struct TArray<struct FString>& FriendNames); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaSpectateMatchModalBase.BuildFriendNameIdMap (Underlying native function: BuildFriendNameIdMap 0xa5b7a24)
	void BuildFriendNameIdMap(); // (Final | Native | Protected | BlueprintCallable)
};

