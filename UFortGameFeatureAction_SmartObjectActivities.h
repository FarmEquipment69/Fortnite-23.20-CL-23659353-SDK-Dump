// Class /Script/FortniteGame.FortGameFeatureAction_SmartObjectActivities
// Size: 0x78
class UFortGameFeatureAction_SmartObjectActivities : public UGameFeatureAction
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	struct TArray<struct FGameFeatureSmartObjectActivityInfo> SmartObjectActivitiesInfo; // 0x40 (0x10)
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	struct TArray<class UClass*> SmartObjectActivitiesLoaded; // 0x68 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameFeatureAction_SmartObjectActivities.OnAIPawnSpawned (Underlying native function: OnAIPawnSpawned 0x81210cc)
	void OnAIPawnSpawned(class APawn*& Pawn, int& RequestId); // (Final | Native | Private)
};

