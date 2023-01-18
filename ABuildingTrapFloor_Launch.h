// Class /Script/FortniteGame.BuildingTrapFloor_Launch
// Size: 0x10f8
class ABuildingTrapFloor_Launch : public ABuildingTrapFloor
{
	struct TWeakObjectPtr<class UForceFeedbackEffect> ForceFeedbackClass; // 0x1088 (0x28)
	struct FName ForceFeedbackName; // 0x10b0 (0x4)
	unsigned char padding_10b4[0x44]; // 0x10b4 (0x44)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTrapFloor_Launch.GetImpulseDirection (Has no native function)
	struct FVector GetImpulseDirection(class AActor*& LaunchingActor); // (Event | Protected | HasDefaults | BlueprintEvent)
};

