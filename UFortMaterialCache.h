// Class /Script/FortniteGame.FortMaterialCache
// Size: 0x38
class UFortMaterialCache : public UObject
{
	struct TArray<struct FMaterialReservation> Reservations; // 0x28 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMaterialCache.ReserveMaterial (Underlying native function: ReserveMaterial 0x89706cc)
	bool ReserveMaterial(class UMaterialInstanceDynamic*& OutMaterialInstance); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMaterialCache.ReleaseMaterial (Underlying native function: ReleaseMaterial 0x8970430)
	void ReleaseMaterial(class UMaterialInstanceDynamic*& MaterialInstance); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

