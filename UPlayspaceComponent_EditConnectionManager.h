// Class /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
// Size: 0x180
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{
	unsigned char unreflected_f8[0x60]; // 0xf8 (0x60) 
	int EditConnections; // 0x158 (0x4)
	enum EVkEditStatus VkEditStatus; // 0x15c (0x1)
	unsigned char unreflected_15d[0x3]; // 0x15d (0x3) 
	struct FGameplayTagContainer UITagsToHide; // 0x160 (0x20)

	/* Functions */

	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus (Underlying native function: OnRep_VkEditStatus 0x77d7e48)
	void OnRepVkEditStatus(); // (Final | Native | Protected | Const)

	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections (Underlying native function: OnRep_EditConnections 0x77d7e34)
	void OnRepEditConnections(); // (Final | Native | Protected | Const)
};

