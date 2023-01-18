// BlueprintGeneratedClass /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
// Size: 0x4440
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4360 (0x8)
	struct TArray<class UMaterialInterface*> DefaultWeaponMaterials; // 0x4368 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnBackpackMaterials; // 0x4378 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnHatMaterials; // 0x4388 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnHeadMaterials; // 0x4398 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnBodyMaterials; // 0x43a8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnCharmMaterials; // 0x43b8 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnFaceMaterials; // 0x43c8 (0x10)
	class UPostProcessComponent* PlayerPostProcessFX; // 0x43d8 (0x8)
	struct TArray<class USkeletalMeshComponent*> SkeletalMeshes; // 0x43e0 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> PawnMaterialsALL; // 0x43f0 (0x10)
	int WaterCounter; // 0x4400 (0x4)
	unsigned char unreflected_4404[0x4]; // 0x4404 (0x4) 
	class AActor* CurrentWaterMeshActor; // 0x4408 (0x8)
	bool IsInWater; // 0x4410 (0x1)
	unsigned char unreflected_4411[0x7]; // 0x4411 (0x7) 
	double Timewhenyoullbeabletosplashagain; // 0x4418 (0x8)
	struct FMulticastInlineDelegate OnOverlapWaterVolume; // 0x4420 (0x10)
	struct TArray<struct FCharacterPartMidArrayStruct> PawnPartMaterials; // 0x4430 (0x10)

	/* Functions */

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Find Stored Char Part Materials (Has no native function)
	void FindStoredCharPartMaterials(struct TEnumAsByte<EFortCustomPartType>& PartType, bool& Found, int& Index, struct TArray<class UMaterialInstanceDynamic*>& MIDs, bool& LFound, int& LIndex, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, struct FCharacterPartMidArrayStruct& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncEqualEqualByteByteReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Exited/Entered Water Volume (Has no native function)
	void ExitedEnteredWaterVolume(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash (Has no native function)
	void PlayerCreatesaSplash(struct FTransform& NewTransform); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReinitializeWeaponMaterials (Has no native function)
	void ReinitializeWeaponMaterials(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent (Has no native function)
	void ExecuteUbergraphPlayerPawnGenericParent(int& EntryPoint, struct FTransform& TempstructVariable, bool& CallFuncIsLocallyControlledReturnValue, class UPostProcessComponent*& CallFuncAddComponentReturnValue, bool& CallFuncIsDedicatedServerReturnValue, struct FTransform& K2NodeCustomEventNewTransform); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.OnOverlapWaterVolume__DelegateSignature (Has no native function)
	void OnOverlapWaterVolumeDelegateSignature(bool& bIsInWater, class AFortPlayerPawn*& Pawn, class AActor*& Water); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

