// Class /Script/FortniteGame.FortCheckPointCosmeticActor
// Size: 0xf10
class AFortCheckPointCosmeticActor : public ABuildingProp
{
	struct TArray<class UStaticMeshComponent*> MidPointMeshes; // 0xee8 (0x10)
	struct TArray<class UStaticMeshComponent*> EndPointMeshes; // 0xef8 (0x10)
	int CheckPointIndex; // 0xf08 (0x4)
	bool bIsEndPoint; // 0xf0c (0x1)
	unsigned char padding_f0d[0x3]; // 0xf0d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortCheckPointCosmeticActor.OnRep_bIsEndPoint (Underlying native function: OnRep_bIsEndPoint 0x8546bb8)
	void OnRepbIsEndPoint(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCheckPointCosmeticActor.OnIsEndPointChanged (Has no native function)
	void OnIsEndPointChanged(); // (Event | Protected | BlueprintEvent)
};

