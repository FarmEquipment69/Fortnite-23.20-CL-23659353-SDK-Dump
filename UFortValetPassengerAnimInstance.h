// Class /Script/ValetRuntime.FortValetPassengerAnimInstance
// Size: 0x870
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{
	struct FCachedAnimRelevancyData IntoVehicleCachedData; // 0x808 (0x14)
	struct FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x81c (0x14)
	struct TWeakObjectPtr<class AFortDagwoodVehicle> DagwoodVehicleInstance; // 0x830 (0x28)
	float TurnYaw; // 0x858 (0x4)
	float InTime; // 0x85c (0x4)
	float OutTime; // 0x860 (0x4)
	float NegativeTurnYaw; // 0x864 (0x4)
	bool bIsReloading; // 0x868 (0x1)
	bool bIsTargeting; // 0x869 (0x1)
	bool bIsFiring; // 0x86a (0x1)
	bool bIsUsingConsumable; // 0x86b (0x1)
	bool bIsInAction; // 0x86c (0x1)
	bool bIsPassengerBackLeft; // 0x86d (0x1)
	bool bIsThrowConsumable; // 0x86e (0x1)
	bool bIsTargetingOrThrowingConsumable; // 0x86f (0x1)
};

