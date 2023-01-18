// BlueprintGeneratedClass /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
// Size: 0x5b0
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{
	unsigned char unreflected_57c[0x4]; // 0x57c (0x4) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x580 (0x8)
	class UStaticMeshComponent* BGDark; // 0x588 (0x8)
	class UStaticMeshComponent* BG; // 0x590 (0x8)
	class UStaticMeshComponent* rarePickupFXMesh; // 0x598 (0x8)
	class USpotLightComponent* SpotLightComp; // 0x5a0 (0x8)
	class UNiagaraComponent* rareAmbientEmitter; // 0x5a8 (0x8)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Setup View Distances (Has no native function)
	void SetupViewDistances(int& viewDistanceQuality, int& lviewQuality, int& TempintVariable, float& TemprealVariable, float& TemprealVariable1, float& TemprealVariable2, float& TemprealVariable3, float& TemprealVariable4, int& TempintVariable1, float& TemprealVariable5, float& TemprealVariable6, float& TemprealVariable7, float& TemprealVariable8, float& TemprealVariable9, bool& CallFuncIsValidReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncFMaxReturnValue, float& K2NodeSelectDefault, float& K2NodeSelectDefault1, int& CallFuncSetupViewDistancesviewDistanceQuality, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.initializeSpotlightComponent (Has no native function)
	void initializeSpotlightComponent(int& TempintVariable, int& CallFuncGetConsoleVariableIntValueReturnValue, bool& K2NodeSwitchIntegerCmpSuccess, bool& CallFuncInEditorOrPIEReturnValue, struct FTransform& TempstructVariable, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, class USpotLightComponent*& CallFuncAddComponentReturnValue, int& CallFuncGetVisualEffectQualityReturnValue, bool& CallFuncIsMobilePlatformReturnValue, int& CallFuncGetRenderingDetailModeReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.AddRareFX (Has no native function)
	void AddRareFX(int& CallFuncGetViewDistanceQualityReturnValue, bool& CallFuncGreaterIntIntReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, double& CallFuncFractionReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, int& CallFuncArrayLengthReturnValue, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, struct FTransform& TempstructVariable, class UStaticMeshComponent*& CallFuncAddComponentReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue2, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncConvLinearColorToVectorReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param (Has no native function)
	void SetInitialBKGDParam(class UMaterialInstanceDynamic*& Mid, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue1, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncMultiplyDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.HideBackgroundAndSpotlight (Has no native function)
	void HideBackgroundAndSpotlight(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnPickedUp (Has no native function)
	void OnPickedUp(class AFortPawn*& PickupTarget); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnTossed (Has no native function)
	void OnTossed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setDrawDistances (Has no native function)
	void setDrawDistances(double& BG, double& bgdark, double& Gun); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_Gun (Has no native function)
	void setMaxDrawGun(double& BG); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BGDark (Has no native function)
	void setMaxDrawBGDark(double& BG); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_BG (Has no native function)
	void setMaxDrawBG(double& BG); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareMesh (Has no native function)
	void setMaxDrawRareMesh(double& BG); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.setMaxDraw_RareFX (Has no native function)
	void setMaxDrawRareFX(double& BG); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default (Has no native function)
	void ExecuteUbergraphBPickupsDefault(int& EntryPoint, double& K2NodeCustomEventbg, bool& CallFuncIsValidReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, class AFortPawn*& K2NodeEventPickupTarget, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue1, bool& CallFuncGetPickupRarityMIDbNeedsToBeInitialized, class UMaterialInstanceDynamic*& CallFuncGetPickupRarityMIDReturnValue, double& K2NodeCustomEventbg5, double& K2NodeCustomEventbgdark, double& K2NodeCustomEventgun, double& K2NodeCustomEventbg4, double& K2NodeCustomEventbg3, double& K2NodeCustomEventbg2, double& K2NodeCustomEventbg1, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast1, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast2, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast3, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast4, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast5, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast6, float& CallFuncSetCullDistanceNewCullDistanceImplicitCast7); // (Final | 0x00008000)
};

