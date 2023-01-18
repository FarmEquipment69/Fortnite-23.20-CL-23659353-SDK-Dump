// Class /Script/FortniteUI.AthenaRebootChipDirective
// Size: 0x2f0
class UAthenaRebootChipDirective : public UFortHUDElementWidget
{
	class UAthenaPlayerViewModel* PlayerVM; // 0x2d0 (0x8)
	struct TArray<class AFortPlayerStateAthena*> RebootableAllies; // 0x2d8 (0x10)
	unsigned char padding_2e8[0x8]; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRebootChipDirective.UpdateSquadListDisplay (Has no native function)
	void UpdateSquadListDisplay(enum EAthenaSquadListUpdateType& UpdateType, class AFortPlayerStateAthena*& PS); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRebootChipDirective.HandleLocalPlayerDied (Underlying native function: HandleLocalPlayerDied 0xa4af7c8)
	void HandleLocalPlayerDied(struct FFortPlayerDeathReport& DeathReport); // (Final | Native | Protected | HasOutParms)
};

