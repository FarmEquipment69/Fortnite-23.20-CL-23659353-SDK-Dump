// Class /Script/FortniteGame.FortAthenaMutator_StormVehicleHelper
// Size: 0x360
class AFortAthenaMutator_StormVehicleHelper : public AFortAthenaMutator
{
	struct FString EventName; // 0x330 (0x10)
	float WallHeight; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	struct TArray<class AActor*> VehiclesToDestroy; // 0x348 (0x10)
	unsigned char padding_358[0x8]; // 0x358 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_StormVehicleHelper.OnPlaylistDataLoaded (Underlying native function: OnPlaylistDataLoaded 0x8505c88)
	void OnPlaylistDataLoaded(struct FName& PlaylistName, struct FGameplayTagContainer& PlaylistContextTags); // (Final | 0x00000002 | Native | Protected | HasOutParms)
};

