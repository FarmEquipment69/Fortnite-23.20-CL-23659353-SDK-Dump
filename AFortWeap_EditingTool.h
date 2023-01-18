// Class /Script/FortniteGame.FortWeap_EditingTool
// Size: 0x1080
class AFortWeap_EditingTool : public AFortWeap_BuildingToolBase
{
	class ABuildingSMActor* EditActor; // 0x1070 (0x8)
	bool bEditConfirmed; // 0x1078 (0x1)
	unsigned char padding_1079[0x7]; // 0x1079 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortWeap_EditingTool.OnRep_EditActor (Underlying native function: OnRep_EditActor 0x9058eec)
	void OnRepEditActor(); // (Final | Native | Private)
};

