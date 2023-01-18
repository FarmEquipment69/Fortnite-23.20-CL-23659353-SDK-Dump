// BlueprintGeneratedClass /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
// Size: 0x2f3
class A_WaterMeshBlueprintMaster_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class UStaticMeshComponent* CollisionMesh1; // 0x290 (0x8)
	class UStaticMeshComponent* CollisionMesh2; // 0x298 (0x8)
	class UStaticMeshComponent* CollisionMesh4; // 0x2a0 (0x8)
	class UStaticMeshComponent* CollisionMesh3; // 0x2a8 (0x8)
	class UStaticMeshComponent* StaticMesh1; // 0x2b0 (0x8)
	int NumberofCollisionMeshes; // 0x2b8 (0x4)
	bool FlipFlow; // 0x2bc (0x1)
	bool NoFlow; // 0x2bd (0x1)
	unsigned char unreflected_2be[0x2]; // 0x2be (0x2) 
	class UMaterialInterface* FlippedMaterial; // 0x2c0 (0x8)
	int CurrentCharactersPersonalWaterCounter; // 0x2c8 (0x4)
	bool EnablePlayerWaterInteractions; // 0x2cc (0x1)
	bool EnteringTrueExitingFalse; // 0x2cd (0x1)
	unsigned char unreflected_2ce[0x2]; // 0x2ce (0x2) 
	class APlayerPawn_Generic_Parent_C* ExternalActor; // 0x2d0 (0x8)
	class UStaticMeshComponent* InternalMesh; // 0x2d8 (0x8)
	bool Continue; // 0x2e0 (0x1)
	unsigned char unreflected_2e1[0x7]; // 0x2e1 (0x7) 
	double Minimumtimebetweensplashes; // 0x2e8 (0x8)
	bool ShowTestMesh; // 0x2f0 (0x1)
	bool HasExecutedConstuctionScript; // 0x2f1 (0x1)
	bool IsDeepWaterAsset; // 0x2f2 (0x1)

	/* Functions */

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction (Has no native function)
	void Construction(int& CallFuncGetNumMaterialsReturnValue, int& TempintVariable, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays (Has no native function)
	void HandleWaterPenetrationComponentsAndArrays(bool& InTOutF, class AActor*& TouchingActor, class UStaticMeshComponent*& TouchingVolume, int& TempintVariable, class APlayerPawn_Generic_Parent_C*& K2NodeDynamicCastAsPlayerPawnGenericParent, bool& K2NodeDynamicCastbSuccess, int& TempintVariable1, bool& TempboolVariable, bool& CallFuncGreaterIntIntReturnValue, int& K2NodeSelectDefault, int& CallFuncAddIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces (Has no native function)
	void FindPlacementonwatermeshsurfaces(struct FTransform& TracedTransform, struct FVector& VelocityVector, bool& TraceHit, struct FLinearColor& NewLocalVar0, bool& TempboolVariable, class UStaticMeshComponent*& K2NodeSelectDefault, struct FVector& CallFuncGetVelocityReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncK2LineTraceComponentHitLocation, struct FVector& CallFuncK2LineTraceComponentHitNormal, struct FName& CallFuncK2LineTraceComponentBoneName, struct FHitResult& CallFuncK2LineTraceComponentOutHit, bool& CallFuncK2LineTraceComponentReturnValue, struct FVector& CallFuncCrossVectorVectorReturnValue, struct FVector& CallFuncCrossVectorVectorReturnValue1, double& CallFuncVSizeReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue, struct FVector& CallFuncSelectVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FRotator& CallFuncMakeRotFromXZReturnValue, struct FTransform& CallFuncMakeTransformReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes (Has no native function)
	void SetupMeshCollisionVolumes(class UStaticMeshComponent*& StaticMeshComponent, int& TargetInt, bool& CallFuncIsValidReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh2K2NodeComponentBoundEvent220ComponentEndOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh3K2NodeComponentBoundEvent211ComponentEndOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMeshK2NodeComponentBoundEvent66ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh4K2NodeComponentBoundEvent203ComponentEndOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh2K2NodeComponentBoundEvent196ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh3K2NodeComponentBoundEvent190ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMesh4K2NodeComponentBoundEvent185ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionMeshK2NodeComponentBoundEvent69ComponentEndOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct (Has no native function)
	void Construct(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster (Has no native function)
	void ExecuteUbergraphWaterMeshBlueprintMaster(int& EntryPoint, struct FTransform& CallFuncFindPlacementonwatermeshsurfacesTracedTransform, struct FVector& CallFuncFindPlacementonwatermeshsurfacesVelocityVector, bool& CallFuncFindPlacementonwatermeshsurfacesTraceHit, bool& CallFuncBooleanANDReturnValue, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncAbsReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncBooleanANDReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue1, class AFortWindManager*& CallFuncGetWindManagerReturnValue, double& CallFuncAddDoubleDoubleReturnValue, class AWindManager_C*& K2NodeDynamicCastAsWindManager, bool& K2NodeDynamicCastbSuccess, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent7, class AActor*& K2NodeComponentBoundEventOtherActor7, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp7, int& K2NodeComponentBoundEventOtherBodyIndex7, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent6, class AActor*& K2NodeComponentBoundEventOtherActor6, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp6, int& K2NodeComponentBoundEventOtherBodyIndex6, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent5, class AActor*& K2NodeComponentBoundEventOtherActor5, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp5, int& K2NodeComponentBoundEventOtherBodyIndex5, bool& K2NodeComponentBoundEventbFromSweep3, struct FHitResult& K2NodeComponentBoundEventSweepResult3, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent4, class AActor*& K2NodeComponentBoundEventOtherActor4, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp4, int& K2NodeComponentBoundEventOtherBodyIndex4, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent3, class AActor*& K2NodeComponentBoundEventOtherActor3, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp3, int& K2NodeComponentBoundEventOtherBodyIndex3, bool& K2NodeComponentBoundEventbFromSweep2, struct FHitResult& K2NodeComponentBoundEventSweepResult2, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent2, class AActor*& K2NodeComponentBoundEventOtherActor2, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp2, int& K2NodeComponentBoundEventOtherBodyIndex2, bool& K2NodeComponentBoundEventbFromSweep1, struct FHitResult& K2NodeComponentBoundEventSweepResult1, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent1, class AActor*& K2NodeComponentBoundEventOtherActor1, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp1, int& K2NodeComponentBoundEventOtherBodyIndex1, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex); // (Final | 0x00008000 | HasDefaults)
};

