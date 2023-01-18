// Class /Script/FortniteUI.FortRedeemCodeBase
// Size: 0x520
class UFortRedeemCodeBase : public UFortActivatablePanel
{
	class UEditableText* EditableTextFriendCodeEntry; // 0x518 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRedeemCodeBase.RedeemFriendCode (Underlying native function: RedeemFriendCode 0xa700c40)
	void RedeemFriendCode(struct FString& FriendCode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortRedeemCodeBase.OnRedeemFriendCodeComplete (Has no native function)
	void OnRedeemFriendCodeComplete(bool& bSuccess, enum ERedeemCodeFailureReason& FailureReason); // (Event | Public | BlueprintEvent)
};

