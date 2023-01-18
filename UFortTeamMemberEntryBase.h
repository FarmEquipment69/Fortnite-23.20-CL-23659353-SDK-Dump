// Class /Script/FortniteUI.FortTeamMemberEntryBase
// Size: 0x1460
class UFortTeamMemberEntryBase : public UCommonButtonLegacy
{
	unsigned char unreflected_1460[0x1460]; 

	/* Functions */

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.OnMemberIsInFrontendChanged (Has no native function)
	void OnMemberIsInFrontendChanged(bool& bIsInFrontEnd); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.OnMemberGameReadinessChanged (Has no native function)
	void OnMemberGameReadinessChanged(enum EGameReadiness& ReadyStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.IsCurrentMemberValid (Underlying native function: IsCurrentMemberValid 0x298e000)
	bool IsCurrentMemberValid(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.IsCurrentMemberLocal (Underlying native function: IsCurrentMemberLocal 0x2c122cc)
	bool IsCurrentMemberLocal(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.IsCurrentMemberInFrontend (Underlying native function: IsCurrentMemberInFrontend 0xa9397e8)
	bool IsCurrentMemberInFrontend(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.GetCurrentMemberGameReadiness (Underlying native function: GetCurrentMemberGameReadiness 0xa9391cc)
	enum EGameReadiness GetCurrentMemberGameReadiness(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortTeamMemberEntryBase.BP_OnTeamMemberEstablished (Has no native function)
	void BPOnTeamMemberEstablished(bool& bHasValidMember); // (Event | Protected | BlueprintEvent)
};

