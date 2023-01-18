// Class /Script/FortniteGame.FortAthenaMutator_CenterSafezonesOnPOIs
// Size: 0x430
class AFortAthenaMutator_CenterSafezonesOnPOIs : public AFortAthenaMutator
{
	struct FScalableFloat UseFirstEntryForAllSafezones; // 0x330 (0x28)
	struct FScalableFloat InitialSafezoneForcedToMapCenter; // 0x358 (0x28)
	struct TMap<int, struct FTaggedPOIList> CenterSafezonesOnPOITag; // 0x380 (0x50)
	struct TMap<int, struct FLocationPOIList> CenterSafezonesOnLiteralLocation; // 0x3d0 (0x50)
	struct TArray<class AFortPoiVolume*> SafezonePOITaggedVolumes; // 0x420 (0x10)
};

