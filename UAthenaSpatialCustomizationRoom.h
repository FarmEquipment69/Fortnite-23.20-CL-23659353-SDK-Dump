// Class /Script/FortniteUI.AthenaSpatialCustomizationRoom
// Size: 0x4d8
class UAthenaSpatialCustomizationRoom : public UAthenaSpatialItemPreviewScreen
{
	class UAthenaSpatialCustomizationCategories* Categories; // 0x480 (0x8)
	class UAthenaSpatialCustomizationSelection* Selection; // 0x488 (0x8)
	class UCommonButtonLegacy* ButtonAbout; // 0x490 (0x8)
	class UAthenaSpatialCustomizationRoomData* CustomizationRoomData; // 0x498 (0x8)
	class UFortGameStateComponent_EventLevel* EventGameStateComponent; // 0x4a0 (0x8)
	struct TArray<struct FMcpVariantChannelInfo> CurrentVariantChannelStates; // 0x4a8 (0x10)
	struct TArray<class UAthenaSpatialCustomizationSubscreenBase*> SubScreens; // 0x4b8 (0x10)
	enum ESpatialCustomizationRoomState RoomState; // 0x4c8 (0x1)
	unsigned char unreflected_4c9[0x7]; // 0x4c9 (0x7) 
	struct FTimerHandle* DelayedApplyColorHandle; // 0x4d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationRoom.OnShowFirstTimeInfo (Has no native function)
	void OnShowFirstTimeInfo(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationRoom.OnRoomStateChanged (Has no native function)
	void OnRoomStateChanged(enum ESpatialCustomizationRoomState& CurrentRoomState, enum ESpatialCustomizationRoomState& PreviousRoomState); // (Event | Protected | BlueprintEvent)
};

