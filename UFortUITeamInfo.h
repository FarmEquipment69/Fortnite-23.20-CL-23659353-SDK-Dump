// Class /Script/FortniteGame.FortUITeamInfo
// Size: 0x210
class UFortUITeamInfo : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FMulticastInlineDelegate OnTeamMemberFinishedSynchronizing; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnTeamMemberAdded; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnTeamMemberRemoved; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnTeamMemberStateChanged; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnTeamMemberPromoted; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnTeamHitPointFractionsChanged; // 0x80 (0x10)
	unsigned char unreflected_90[0xa0]; // 0x90 (0xa0) 
	class UFortPartyContext* TeamContext; // 0x130 (0x8)
	unsigned char TeamAssignment; // 0x138 (0x1)
	unsigned char unreflected_139[0x7]; // 0x139 (0x7) 
	class UEnum* FortTeamUEnum; // 0x140 (0x8)
	int TotalFilledSlots; // 0x148 (0x4)
	int PreviousFilledSlots; // 0x14c (0x4)
	unsigned char padding_150[0xc0]; // 0x150 (0xc0)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamMemberStateChangedDelegate__DelegateSignature (Has no native function)
	void OnTeamMemberStateChangedDelegateDelegateSignature(struct FFortTeamMemberInfo& TeamMemberInfo); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamMemberSimpleDelegate__DelegateSignature (Has no native function)
	void OnTeamMemberSimpleDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamMemberRemovedDelegate__DelegateSignature (Has no native function)
	void OnTeamMemberRemovedDelegateDelegateSignature(int& PlayerIndex); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamMemberFinishedSynchronizingDelegate__DelegateSignature (Has no native function)
	void OnTeamMemberFinishedSynchronizingDelegateDelegateSignature(struct FUniqueNetIdRepl& NewTeamMemberId); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamMemberAddedDelegate__DelegateSignature (Has no native function)
	void OnTeamMemberAddedDelegateDelegateSignature(struct FFortTeamMemberInfo& NewTeamMemberInfo); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteGame.FortUITeamInfo.OnTeamHitPointFractionsChanged__DelegateSignature (Has no native function)
	void OnTeamHitPointFractionsChangedDelegateSignature(struct TArray<float>& HealthFractions, struct TArray<float>& ShieldFractions); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/FortniteGame.FortUITeamInfo.IsTeamMemberSynchronizing (Underlying native function: IsTeamMemberSynchronizing 0x8cbf5b4)
	bool IsTeamMemberSynchronizing(struct FUniqueNetIdRepl& PlayerId); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortUITeamInfo.GetTeamMembers (Underlying native function: GetTeamMembers 0x8cbf400)
	void GetTeamMembers(struct TArray<struct FFortTeamMemberInfo>& TeamMembers); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortUITeamInfo.GetTeamMemberIDs (Underlying native function: GetTeamMemberIDs 0x8cbf368)
	void GetTeamMemberIDs(struct TArray<struct FUniqueNetIdRepl>& TeamMemberIDs); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortUITeamInfo.GetTeamMember (Underlying native function: GetTeamMember 0x8cbf25c)
	bool GetTeamMember(int& MemberIndex, struct FFortTeamMemberInfo& OutMember); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortUITeamInfo.GetTeamHitPointFractions (Underlying native function: GetTeamHitPointFractions 0x8cbf148)
	void GetTeamHitPointFractions(struct TArray<float>& HealthFractions, struct TArray<float>& ShieldFractions); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)
};

