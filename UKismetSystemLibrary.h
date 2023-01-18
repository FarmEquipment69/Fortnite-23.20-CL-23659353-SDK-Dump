// Class /Script/Engine.KismetSystemLibrary
// Size: 0x28
class UKismetSystemLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetSystemLibrary.UnregisterForRemoteNotifications (Underlying native function: UnregisterForRemoteNotifications 0x26daa0c)
	static void UnregisterForRemoteNotifications(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.UnloadPrimaryAssetList (Underlying native function: UnloadPrimaryAssetList 0x9e1b6c8)
	static void UnloadPrimaryAssetList(struct TArray<struct FPrimaryAssetId*>& PrimaryAssetIdList); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.UnloadPrimaryAsset (Underlying native function: UnloadPrimaryAsset 0x9e1b640)
	static void UnloadPrimaryAsset(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.TransactObject (Underlying native function: TransactObject 0x71a663c)
	static void TransactObject(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.StackTrace (Underlying native function: StackTrace 0x9e18fcc)
	static void StackTrace(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceSingleForObjects (Underlying native function: SphereTraceSingleForObjects 0x9e18a30)
	static bool SphereTraceSingleForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceSingleByProfile (Underlying native function: SphereTraceSingleByProfile 0x9e18614)
	static bool SphereTraceSingleByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceSingle (Underlying native function: SphereTraceSingle 0x9e181f8)
	static bool SphereTraceSingle(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceMultiForObjects (Underlying native function: SphereTraceMultiForObjects 0x20f7408)
	static bool SphereTraceMultiForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceMultiByProfile (Underlying native function: SphereTraceMultiByProfile 0x9e17dd4)
	static bool SphereTraceMultiByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereTraceMulti (Underlying native function: SphereTraceMulti 0x9e179b0)
	static bool SphereTraceMulti(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereOverlapComponents (Underlying native function: SphereOverlapComponents 0x9e17720)
	static bool SphereOverlapComponents(class UObject*& WorldContextObject, struct FVector& SpherePos, float& SphereRadius, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ComponentClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class UPrimitiveComponent*>& OutComponents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SphereOverlapActors (Underlying native function: SphereOverlapActors 0x9e17490)
	static bool SphereOverlapActors(class UObject*& WorldContextObject, struct FVector& SpherePos, float& SphereRadius, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SnapshotObject (Underlying native function: SnapshotObject 0x71a663c)
	static void SnapshotObject(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ShowPlatformSpecificLeaderboardScreen (Underlying native function: ShowPlatformSpecificLeaderboardScreen 0x9e170f4)
	static void ShowPlatformSpecificLeaderboardScreen(struct FString& CategoryName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ShowPlatformSpecificAchievementsScreen (Underlying native function: ShowPlatformSpecificAchievementsScreen 0x9e17008)
	static void ShowPlatformSpecificAchievementsScreen(class APlayerController*& SpecificPlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ShowInterstitialAd (Underlying native function: ShowInterstitialAd 0x9e16fd4)
	static void ShowInterstitialAd(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ShowAdBanner (Underlying native function: ShowAdBanner 0x9e16efc)
	static void ShowAdBanner(int& AdIdIndex, bool& bShowOnBottomOfScreen); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetWindowTitle (Underlying native function: SetWindowTitle 0x9e16e50)
	static void SetWindowTitle(struct FText& Title); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetVolumeButtonsHandledBySystem (Underlying native function: SetVolumeButtonsHandledBySystem 0x71a6cc4)
	static void SetVolumeButtonsHandledBySystem(bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetVectorPropertyByName (Underlying native function: SetVectorPropertyByName 0x9e16be8)
	static void SetVectorPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FVector& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetVector3fPropertyByName (Underlying native function: SetVector3fPropertyByName 0x9e16a7c)
	static void SetVector3fPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FVector3f& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetUserActivity (Underlying native function: SetUserActivity 0x9e16920)
	static void SetUserActivity(struct FUserActivity& UserActivity); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetTransformPropertyByName (Underlying native function: SetTransformPropertyByName 0x9e16724)
	static void SetTransformPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FTransform& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetTextPropertyByName (Underlying native function: SetTextPropertyByName 0x293e374)
	static void SetTextPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FText& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetSuppressViewportTransitionMessage (Underlying native function: SetSuppressViewportTransitionMessage 0x9e1662c)
	static void SetSuppressViewportTransitionMessage(class UObject*& WorldContextObject, bool& bState); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetStructurePropertyByName (Underlying native function: SetStructurePropertyByName 0x1e9c85c)
	static void SetStructurePropertyByName(class UObject*& Object, struct FName& PropertyName, struct FGenericStruct& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetStringPropertyByName (Underlying native function: SetStringPropertyByName 0x9e163b8)
	static void SetStringPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FString& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetSoftObjectPropertyByName (Underlying native function: SetSoftObjectPropertyByName 0x9e161cc)
	static void SetSoftObjectPropertyByName(class UObject*& Object, struct FName& PropertyName, struct TWeakObjectPtr<class UObject>& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetSoftClassPropertyByName (Underlying native function: SetSoftClassPropertyByName 0x9e15fe0)
	static void SetSoftClassPropertyByName(class UObject*& Object, struct FName& PropertyName, struct TWeakObjectPtr<class UClass>& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetRotatorPropertyByName (Underlying native function: SetRotatorPropertyByName 0x9e15e70)
	static void SetRotatorPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FRotator& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetObjectPropertyByName (Underlying native function: SetObjectPropertyByName 0x1ed9448)
	static void SetObjectPropertyByName(class UObject*& Object, struct FName& PropertyName, class UObject*& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetNamePropertyByName (Underlying native function: SetNamePropertyByName 0x9e15b34)
	static void SetNamePropertyByName(class UObject*& Object, struct FName& PropertyName, struct FName& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetLinearColorPropertyByName (Underlying native function: SetLinearColorPropertyByName 0x9e159d0)
	static void SetLinearColorPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FLinearColor& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetIntPropertyByName (Underlying native function: SetIntPropertyByName 0x9e156f4)
	static void SetIntPropertyByName(class UObject*& Object, struct FName& PropertyName, int& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetInterfacePropertyByName (Underlying native function: SetInterfacePropertyByName 0x9e15844)
	static void SetInterfacePropertyByName(class UObject*& Object, struct FName& PropertyName, struct TScriptInterface<class IInterface>& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetInt64PropertyByName (Underlying native function: SetInt64PropertyByName 0x9e155a0)
	static void SetInt64PropertyByName(class UObject*& Object, struct FName& PropertyName, int64_t& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetGamepadsBlockDeviceFeedback (Underlying native function: SetGamepadsBlockDeviceFeedback 0x71a6cc4)
	static void SetGamepadsBlockDeviceFeedback(bool& bBlock); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetFieldPathPropertyByName (Underlying native function: SetFieldPathPropertyByName 0x9e15330)
	static void SetFieldPathPropertyByName(class UObject*& Object, struct FName& PropertyName, ); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetDoublePropertyByName (Underlying native function: SetDoublePropertyByName 0x1f4cb4c)
	static void SetDoublePropertyByName(class UObject*& Object, struct FName& PropertyName, double& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetColorPropertyByName (Underlying native function: SetColorPropertyByName 0x9e14870)
	static void SetColorPropertyByName(class UObject*& Object, struct FName& PropertyName, struct FColor& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetCollisionProfileNameProperty (Underlying native function: SetCollisionProfileNameProperty 0x9e14730)
	static void SetCollisionProfileNameProperty(class UObject*& Object, struct FName& PropertyName, struct FCollisionProfileName& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetClassPropertyByName (Underlying native function: SetClassPropertyByName 0x9e143b8)
	static void SetClassPropertyByName(class UObject*& Object, struct FName& PropertyName, class UClass*& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetBytePropertyByName (Underlying native function: SetBytePropertyByName 0x20b75e0)
	static void SetBytePropertyByName(class UObject*& Object, struct FName& PropertyName, unsigned char& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.SetBoolPropertyByName (Underlying native function: SetBoolPropertyByName 0x22be640)
	static void SetBoolPropertyByName(class UObject*& Object, struct FName& PropertyName, bool& Value); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.RetriggerableDelay (Underlying native function: RetriggerableDelay 0x176fc50)
	static void RetriggerableDelay(class UObject*& WorldContextObject, float& Duration, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ResetGamepadAssignmentToController (Underlying native function: ResetGamepadAssignmentToController 0x7239740)
	static void ResetGamepadAssignmentToController(int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ResetGamepadAssignments (Underlying native function: ResetGamepadAssignments 0x26daa0c)
	static void ResetGamepadAssignments(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.RegisterForRemoteNotifications (Underlying native function: RegisterForRemoteNotifications 0x26daa0c)
	static void RegisterForRemoteNotifications(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.QuitGame (Underlying native function: QuitGame 0x9e0e79c)
	static void QuitGame(class UObject*& WorldContextObject, class APlayerController*& SpecificPlayer, struct TEnumAsByte<EQuitPreference>& QuitPreference, bool& bIgnorePlatformRestrictions); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.PrintWarning (Underlying native function: PrintWarning 0x7291288)
	static void PrintWarning(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.PrintText (Underlying native function: PrintText 0x9e0c664)
	static void PrintText(class UObject*& WorldContextObject, struct FText& InText, bool& bPrintToScreen, bool& bPrintToLog, struct FLinearColor& TextColor, float& Duration, struct FName& Key); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.PrintString (Underlying native function: PrintString 0x9e0c3c4)
	static void PrintString(class UObject*& WorldContextObject, struct FString& InString, bool& bPrintToScreen, bool& bPrintToLog, struct FLinearColor& TextColor, float& Duration, struct FName& Key); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ParseParamValue (Underlying native function: ParseParamValue 0x9e0af94)
	static bool ParseParamValue(struct FString& InString, struct FString& InParam, struct FString& OutValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.ParseParam (Underlying native function: ParseParam 0x9e0ad18)
	static bool ParseParam(struct FString& InString, struct FString& InParam); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.ParseCommandLine (Underlying native function: ParseCommandLine 0x9e0a788)
	static void ParseCommandLine(struct FString& InCmdLine, struct TArray<struct FString>& OutTokens, struct TArray<struct FString>& OutSwitches, struct TMap<struct FString, struct FString>& OutParams); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/Engine.KismetSystemLibrary.OnAssetLoaded__DelegateSignature (Has no native function)
	void OnAssetLoadedDelegateSignature(class UObject*& Loaded); // (Public | Delegate)

	// DelegateFunction /Script/Engine.KismetSystemLibrary.OnAssetClassLoaded__DelegateSignature (Has no native function)
	void OnAssetClassLoadedDelegateSignature(class UClass*& Loaded); // (Public | Delegate)

	// Function /Script/Engine.KismetSystemLibrary.NotEqual_SoftObjectReference (Underlying native function: NotEqual_SoftObjectReference 0x9e0a0c8)
	static bool NotEqualSoftObjectReference(struct TWeakObjectPtr<class UObject>& A, struct TWeakObjectPtr<class UObject>& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.NotEqual_SoftClassReference (Underlying native function: NotEqual_SoftClassReference 0x9e0a0c8)
	static bool NotEqualSoftClassReference(struct TWeakObjectPtr<class UClass>& A, struct TWeakObjectPtr<class UClass>& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.NotEqual_PrimaryAssetType (Underlying native function: NotEqual_PrimaryAssetType 0x6aa452c)
	static bool NotEqualPrimaryAssetType(struct FPrimaryAssetType& A, struct FPrimaryAssetType& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.NotEqual_PrimaryAssetId (Underlying native function: NotEqual_PrimaryAssetId 0x6aa4460)
	static bool NotEqualPrimaryAssetId(struct FPrimaryAssetId*& A, struct FPrimaryAssetId*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.NormalizeFilename (Underlying native function: NormalizeFilename 0x9e091d8)
	static struct FString NormalizeFilename(struct FString& InFilename); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MoveComponentTo (Underlying native function: MoveComponentTo 0x9e07794)
	static void MoveComponentTo(class USceneComponent*& Component, struct FVector& TargetRelativeLocation, struct FRotator& TargetRelativeRotation, bool& bEaseOut, bool& bEaseIn, float& OverTime, bool& bForceShortestRotationPath, struct TEnumAsByte<EMoveComponentAction>& MoveAction, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.MakeSoftObjectPath (Underlying native function: MakeSoftObjectPath 0x9e027a8)
	static struct FSoftObjectPath MakeSoftObjectPath(struct FString& PathString); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeSoftClassPath (Underlying native function: MakeSoftClassPath 0x9e02430)
	static struct FSoftClassPath MakeSoftClassPath(struct FString& PathString); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralText (Underlying native function: MakeLiteralText 0x241ae1c)
	static struct FText MakeLiteralText(struct FText& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralString (Underlying native function: MakeLiteralString 0x9e010b8)
	static struct FString MakeLiteralString(struct FString& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralName (Underlying native function: MakeLiteralName 0x2392a34)
	static struct FName MakeLiteralName(struct FName& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralInt64 (Underlying native function: MakeLiteralInt64 0x9e0103c)
	static int64_t MakeLiteralInt64(int64_t& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralInt (Underlying native function: MakeLiteralInt 0x234f3d8)
	static int MakeLiteralInt(int& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralDouble (Underlying native function: MakeLiteralDouble 0x249bbbc)
	static double MakeLiteralDouble(double& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralByte (Underlying native function: MakeLiteralByte 0x215e088)
	static unsigned char MakeLiteralByte(unsigned char& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeLiteralBool (Underlying native function: MakeLiteralBool 0x9de48e4)
	static bool MakeLiteralBool(bool& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.MakeARFilter (Underlying native function: MakeARFilter 0x9e005c8)
	static struct FARFilter MakeARFilter(struct TArray<struct FName>& PackageNames, struct TArray<struct FName>& PackagePaths, struct TArray<struct FSoftObjectPath>& SoftObjectPaths, struct TArray<struct FTopLevelAssetPath*>& ClassPaths, struct TSet<struct FTopLevelAssetPath*>& RecursiveClassPathsExclusionSet, struct TArray<struct FName>& ClassNames, struct TSet<struct FName>& RecursiveClassesExclusionSet, bool& bRecursivePaths, bool& bRecursiveClasses, bool& bIncludeOnlyOnDiskAssets); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.LogString (Underlying native function: LogString 0x76c0ea4)
	static void LogString(struct FString& InString, bool& bPrintToLog); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LoadInterstitialAd (Underlying native function: LoadInterstitialAd 0x9e003ec)
	static void LoadInterstitialAd(int& AdIdIndex); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LoadClassAsset_Blocking (Underlying native function: LoadClassAsset_Blocking 0x9e002b4)
	static class UClass* LoadClassAssetBlocking(struct TWeakObjectPtr<class UClass>& AssetClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LoadAssetClass (Underlying native function: LoadAssetClass 0x24dc518)
	static void LoadAssetClass(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UClass>& AssetClass, struct FDelegate& OnLoaded, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LoadAsset_Blocking (Underlying native function: LoadAsset_Blocking 0x9e0013c)
	static class UObject* LoadAssetBlocking(struct TWeakObjectPtr<class UObject>& Asset); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LoadAsset (Underlying native function: LoadAsset 0x176f4d0)
	static void LoadAsset(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UObject>& Asset, struct FDelegate& OnLoaded, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceSingleForObjects (Underlying native function: LineTraceSingleForObjects 0x20f7c30)
	static bool LineTraceSingleForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceSingleByProfile (Underlying native function: LineTraceSingleByProfile 0x9dfeb74)
	static bool LineTraceSingleByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceSingle (Underlying native function: LineTraceSingle 0x20f858c)
	static bool LineTraceSingle(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceMultiForObjects (Underlying native function: LineTraceMultiForObjects 0x9dfe774)
	static bool LineTraceMultiForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceMultiByProfile (Underlying native function: LineTraceMultiByProfile 0x9dfe3ac)
	static bool LineTraceMultiByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LineTraceMulti (Underlying native function: LineTraceMulti 0x20f804c)
	static bool LineTraceMulti(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.LaunchURL (Underlying native function: LaunchURL 0x9dfd534)
	static void LaunchURL(struct FString& URL); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_UnPauseTimerHandle (Underlying native function: K2_UnPauseTimerHandle 0x29a9a58)
	static void K2UnPauseTimerHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_UnPauseTimerDelegate (Underlying native function: K2_UnPauseTimerDelegate 0x9dfc678)
	static void K2UnPauseTimerDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_UnPauseTimer (Underlying native function: K2_UnPauseTimer 0x9dfc4d4)
	static void K2UnPauseTimer(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_TimerExistsHandle (Underlying native function: K2_TimerExistsHandle 0x9dfc3ec)
	static bool K2TimerExistsHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_TimerExistsDelegate (Underlying native function: K2_TimerExistsDelegate 0x9dfc358)
	static bool K2TimerExistsDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_TimerExists (Underlying native function: K2_TimerExists 0x9dfc1b0)
	static bool K2TimerExists(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_SetTimerForNextTickDelegate (Underlying native function: K2_SetTimerForNextTickDelegate 0x9dfc110)
	static struct FTimerHandle* K2SetTimerForNextTickDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_SetTimerForNextTick (Underlying native function: K2_SetTimerForNextTick 0x9dfbe44)
	static struct FTimerHandle* K2SetTimerForNextTick(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_SetTimerDelegate (Underlying native function: K2_SetTimerDelegate 0xef551c)
	static struct FTimerHandle* K2SetTimerDelegate(struct FDelegate& Delegate, float& Time, bool& bLooping, float& InitialStartDelay, float& InitialStartDelayVariance); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_SetTimer (Underlying native function: K2_SetTimer 0xecc9dc)
	static struct FTimerHandle* K2SetTimer(class UObject*& Object, struct FString& FunctionName, float& Time, bool& bLooping, float& InitialStartDelay, float& InitialStartDelayVariance); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_PauseTimerHandle (Underlying native function: K2_PauseTimerHandle 0x29e6508)
	static void K2PauseTimerHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_PauseTimerDelegate (Underlying native function: K2_PauseTimerDelegate 0x9dfbdbc)
	static void K2PauseTimerDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_PauseTimer (Underlying native function: K2_PauseTimer 0x9dfbc18)
	static void K2PauseTimer(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsValidTimerHandle (Underlying native function: K2_IsValidTimerHandle 0x272ec18)
	static bool K2IsValidTimerHandle(struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerPausedHandle (Underlying native function: K2_IsTimerPausedHandle 0x9dfbb28)
	static bool K2IsTimerPausedHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerPausedDelegate (Underlying native function: K2_IsTimerPausedDelegate 0x9dfba94)
	static bool K2IsTimerPausedDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerPaused (Underlying native function: K2_IsTimerPaused 0x9dfb8ec)
	static bool K2IsTimerPaused(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerActiveHandle (Underlying native function: K2_IsTimerActiveHandle 0x2923e84)
	static bool K2IsTimerActiveHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerActiveDelegate (Underlying native function: K2_IsTimerActiveDelegate 0x9dfb858)
	static bool K2IsTimerActiveDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_IsTimerActive (Underlying native function: K2_IsTimerActive 0x9dfb6b0)
	static bool K2IsTimerActive(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_InvalidateTimerHandle (Underlying native function: K2_InvalidateTimerHandle 0x9dfb628)
	static struct FTimerHandle* K2InvalidateTimerHandle(struct FTimerHandle*& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeHandle (Underlying native function: K2_GetTimerRemainingTimeHandle 0x9dfb4fc)
	static float K2GetTimerRemainingTimeHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerRemainingTimeDelegate (Underlying native function: K2_GetTimerRemainingTimeDelegate 0x9dfb464)
	static float K2GetTimerRemainingTimeDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerRemainingTime (Underlying native function: K2_GetTimerRemainingTime 0x9dfb2b0)
	static float K2GetTimerRemainingTime(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeHandle (Underlying native function: K2_GetTimerElapsedTimeHandle 0x9dfb1b0)
	static float K2GetTimerElapsedTimeHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerElapsedTimeDelegate (Underlying native function: K2_GetTimerElapsedTimeDelegate 0x9dfb118)
	static float K2GetTimerElapsedTimeDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_GetTimerElapsedTime (Underlying native function: K2_GetTimerElapsedTime 0x9dfaf6c)
	static float K2GetTimerElapsedTime(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.K2_ClearTimerHandle (Underlying native function: K2_ClearTimerHandle 0x9dfae44)
	static void K2ClearTimerHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_ClearTimerDelegate (Underlying native function: K2_ClearTimerDelegate 0x9dfadbc)
	static void K2ClearTimerDelegate(struct FDelegate& Delegate); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_ClearTimer (Underlying native function: K2_ClearTimer 0x25dcf20)
	static void K2ClearTimer(class UObject*& Object, struct FString& FunctionName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.K2_ClearAndInvalidateTimerHandle (Underlying native function: K2_ClearAndInvalidateTimerHandle 0x218c3b8)
	static void K2ClearAndInvalidateTimerHandle(class UObject*& WorldContextObject, struct FTimerHandle*& Handle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.IsValidSoftObjectReference (Underlying native function: IsValidSoftObjectReference 0x254bc94)
	static bool IsValidSoftObjectReference(struct TWeakObjectPtr<class UObject>& SoftObjectReference); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsValidSoftClassReference (Underlying native function: IsValidSoftClassReference 0x258f928)
	static bool IsValidSoftClassReference(struct TWeakObjectPtr<class UClass>& SoftClassReference); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsValidPrimaryAssetType (Underlying native function: IsValidPrimaryAssetType 0x6aa439c)
	static bool IsValidPrimaryAssetType(struct FPrimaryAssetType& PrimaryAssetType); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsValidPrimaryAssetId (Underlying native function: IsValidPrimaryAssetId 0x6aa42bc)
	static bool IsValidPrimaryAssetId(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsValidClass (Underlying native function: IsValidClass 0x1186ef0)
	static bool IsValidClass(class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsValid (Underlying native function: IsValid 0x1186ef0)
	static bool IsValid(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsUnattended (Underlying native function: IsUnattended 0x9dfaa80)
	static bool IsUnattended(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsStandalone (Underlying native function: IsStandalone 0x9dfa9e8)
	static bool IsStandalone(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsSplitScreen (Underlying native function: IsSplitScreen 0x9dfa968)
	static bool IsSplitScreen(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsServer (Underlying native function: IsServer 0x21e8328)
	static bool IsServer(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsScreensaverEnabled (Underlying native function: IsScreensaverEnabled 0x2486284)
	static bool IsScreensaverEnabled(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.IsPackagedForDistribution (Underlying native function: IsPackagedForDistribution 0x27c9608)
	static bool IsPackagedForDistribution(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsLoggedIn (Underlying native function: IsLoggedIn 0x9df9d68)
	static bool IsLoggedIn(class APlayerController*& SpecificPlayer); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsInterstitialAdRequested (Underlying native function: IsInterstitialAdRequested 0x9df9ca4)
	static bool IsInterstitialAdRequested(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.IsInterstitialAdAvailable (Underlying native function: IsInterstitialAdAvailable 0x9df9c5c)
	static bool IsInterstitialAdAvailable(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.IsDedicatedServer (Underlying native function: IsDedicatedServer 0x1186384)
	static bool IsDedicatedServer(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.IsControllerAssignedToGamepad (Underlying native function: IsControllerAssignedToGamepad 0x9df9a98)
	static bool IsControllerAssignedToGamepad(int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.HideAdBanner (Underlying native function: HideAdBanner 0x9df8050)
	static void HideAdBanner(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.HasMultipleLocalPlayers (Underlying native function: HasMultipleLocalPlayers 0x1ef4c48)
	static bool HasMultipleLocalPlayers(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetVolumeButtonsHandledBySystem (Underlying native function: GetVolumeButtonsHandledBySystem 0x27c9608)
	static bool GetVolumeButtonsHandledBySystem(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetUniqueDeviceId (Underlying native function: GetUniqueDeviceId 0x7308ee4)
	static struct FString GetUniqueDeviceId(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetSystemPath (Underlying native function: GetSystemPath 0x9df618c)
	static struct FString GetSystemPath(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetSupportedFullscreenResolutions (Underlying native function: GetSupportedFullscreenResolutions 0x9df60f0)
	static bool GetSupportedFullscreenResolutions(struct TArray<struct FIntPoint*>& Resolutions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetSoftObjectReferenceFromPrimaryAssetId (Underlying native function: GetSoftObjectReferenceFromPrimaryAssetId 0x9df5b90)
	static struct TWeakObjectPtr<class UObject> GetSoftObjectReferenceFromPrimaryAssetId(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetSoftObjectPath (Underlying native function: GetSoftObjectPath 0x9df5acc)
	static struct FSoftObjectPath GetSoftObjectPath(class UObject*& Object); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetSoftClassReferenceFromPrimaryAssetId (Underlying native function: GetSoftClassReferenceFromPrimaryAssetId 0x9df5a34)
	static struct TWeakObjectPtr<class UClass> GetSoftClassReferenceFromPrimaryAssetId(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetSoftClassPath (Underlying native function: GetSoftClassPath 0x9df595c)
	static struct FSoftClassPath GetSoftClassPath(class UClass*& Class); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetRenderingMaterialQualityLevel (Underlying native function: GetRenderingMaterialQualityLevel 0x9df54f8)
	static int GetRenderingMaterialQualityLevel(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetRenderingDetailMode (Underlying native function: GetRenderingDetailMode 0x2355fc8)
	static int GetRenderingDetailMode(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetProjectSavedDirectory (Underlying native function: GetProjectSavedDirectory 0x9df51f8)
	static struct FString GetProjectSavedDirectory(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetProjectDirectory (Underlying native function: GetProjectDirectory 0x9df5198)
	static struct FString GetProjectDirectory(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetProjectContentDirectory (Underlying native function: GetProjectContentDirectory 0x9df5048)
	static struct FString GetProjectContentDirectory(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetsWithBundleState (Underlying native function: GetPrimaryAssetsWithBundleState 0x9df4e24)
	static void GetPrimaryAssetsWithBundleState(struct TArray<struct FName>& RequiredBundles, struct TArray<struct FName>& ExcludedBundles, struct TArray<struct FPrimaryAssetType>& ValidTypes, bool& bForceCurrentState, struct TArray<struct FPrimaryAssetId*>& OutPrimaryAssetIdList); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdList (Underlying native function: GetPrimaryAssetIdList 0x9df4d3c)
	static void GetPrimaryAssetIdList(struct FPrimaryAssetType& PrimaryAssetType, struct TArray<struct FPrimaryAssetId*>& OutPrimaryAssetIdList); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftObjectReference (Underlying native function: GetPrimaryAssetIdFromSoftObjectReference 0x9df4bf0)
	static struct FPrimaryAssetId* GetPrimaryAssetIdFromSoftObjectReference(struct TWeakObjectPtr<class UObject>& SoftObjectReference); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromSoftClassReference (Underlying native function: GetPrimaryAssetIdFromSoftClassReference 0x9df4aa4)
	static struct FPrimaryAssetId* GetPrimaryAssetIdFromSoftClassReference(struct TWeakObjectPtr<class UClass>& SoftClassReference); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromObject (Underlying native function: GetPrimaryAssetIdFromObject 0x9df49f8)
	static struct FPrimaryAssetId* GetPrimaryAssetIdFromObject(class UObject*& Object); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPrimaryAssetIdFromClass (Underlying native function: GetPrimaryAssetIdFromClass 0x9df47d8)
	static struct FPrimaryAssetId* GetPrimaryAssetIdFromClass(class UClass*& Class); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPreferredLanguages (Underlying native function: GetPreferredLanguages 0x9df473c)
	static struct TArray<struct FString> GetPreferredLanguages(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetPlatformUserName (Underlying native function: GetPlatformUserName 0x9df4450)
	static struct FString GetPlatformUserName(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPlatformUserDir (Underlying native function: GetPlatformUserDir 0x9df43dc)
	static struct FString GetPlatformUserDir(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetPathName (Underlying native function: GetPathName 0x9df4224)
	static struct FString GetPathName(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetOuterObject (Underlying native function: GetOuterObject 0x9df4180)
	static class UObject* GetOuterObject(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetObjectName (Underlying native function: GetObjectName 0x24257f4)
	static struct FString GetObjectName(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetObjectFromPrimaryAssetId (Underlying native function: GetObjectFromPrimaryAssetId 0x9df4100)
	static class UObject* GetObjectFromPrimaryAssetId(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetMinYResolutionForUI (Underlying native function: GetMinYResolutionForUI 0x9df3dcc)
	static int GetMinYResolutionForUI(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetMinYResolutionFor3DView (Underlying native function: GetMinYResolutionFor3DView 0x9df3dac)
	static int GetMinYResolutionFor3DView(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetLocalCurrencySymbol (Underlying native function: GetLocalCurrencySymbol 0x7308ee4)
	static struct FString GetLocalCurrencySymbol(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetLocalCurrencyCode (Underlying native function: GetLocalCurrencyCode 0x7308ee4)
	static struct FString GetLocalCurrencyCode(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetGameTimeInSeconds (Underlying native function: GetGameTimeInSeconds 0x20bd4a8)
	static double GetGameTimeInSeconds(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetGamepadControllerName (Underlying native function: GetGamepadControllerName 0x9df31bc)
	static struct FString GetGamepadControllerName(int& ControllerId); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetGamepadButtonGlyph (Underlying native function: GetGamepadButtonGlyph 0x9df3020)
	static class UTexture2D* GetGamepadButtonGlyph(struct FString& ButtonKey, int& ControllerIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetGameName (Underlying native function: GetGameName 0x9df2e50)
	static struct FString GetGameName(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetGameBundleId (Underlying native function: GetGameBundleId 0x9df2e00)
	static struct FString GetGameBundleId(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetFrameCount (Underlying native function: GetFrameCount 0x24176a8)
	static int64_t GetFrameCount(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetEngineVersion (Underlying native function: GetEngineVersion 0x9df2afc)
	static struct FString GetEngineVersion(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetDisplayName (Underlying native function: GetDisplayName 0x22b7f98)
	static struct FString GetDisplayName(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetDeviceId (Underlying native function: GetDeviceId 0x7308ee4)
	static struct FString GetDeviceId(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetDefaultLocale (Underlying native function: GetDefaultLocale 0x9df294c)
	static struct FString GetDefaultLocale(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetDefaultLanguage (Underlying native function: GetDefaultLanguage 0x9df2818)
	static struct FString GetDefaultLanguage(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetCurrentBundleState (Underlying native function: GetCurrentBundleState 0x9df237c)
	static bool GetCurrentBundleState(struct FPrimaryAssetId*& PrimaryAssetId, bool& bForceCurrentState, struct TArray<struct FName>& OutBundles); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetConvenientWindowedResolutions (Underlying native function: GetConvenientWindowedResolutions 0x9df1f4c)
	static bool GetConvenientWindowedResolutions(struct TArray<struct FIntPoint*>& Resolutions); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableIntValue (Underlying native function: GetConsoleVariableIntValue 0x1e048a4)
	static int GetConsoleVariableIntValue(struct FString& VariableName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableFloatValue (Underlying native function: GetConsoleVariableFloatValue 0x23e4540)
	static float GetConsoleVariableFloatValue(struct FString& VariableName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetConsoleVariableBoolValue (Underlying native function: GetConsoleVariableBoolValue 0x1e04814)
	static bool GetConsoleVariableBoolValue(struct FString& VariableName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetComponentBounds (Underlying native function: GetComponentBounds 0x1fab140)
	static void GetComponentBounds(class USceneComponent*& Component, struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetCommandLine (Underlying native function: GetCommandLine 0x9df1ed8)
	static struct FString GetCommandLine(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetClassFromPrimaryAssetId (Underlying native function: GetClassFromPrimaryAssetId 0x9df1e50)
	static class UClass* GetClassFromPrimaryAssetId(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetClassDisplayName (Underlying native function: GetClassDisplayName 0x9df1d94)
	static struct FString GetClassDisplayName(class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetBuildVersion (Underlying native function: GetBuildVersion 0x9df17ac)
	static struct FString GetBuildVersion(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetBuildConfiguration (Underlying native function: GetBuildConfiguration 0x9df1738)
	static struct FString GetBuildConfiguration(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetAdIDCount (Underlying native function: GetAdIDCount 0x9df1458)
	static int GetAdIDCount(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.GetActorListFromComponentList (Underlying native function: GetActorListFromComponentList 0x9df1314)
	static void GetActorListFromComponentList(struct TArray<class UPrimitiveComponent*>& ComponentList, class UClass*& ActorClassFilter, struct TArray<class AActor*>& OutActorList); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.GetActorBounds (Underlying native function: GetActorBounds 0x9df1130)
	static void GetActorBounds(class AActor*& Actor, struct FVector& Origin, struct FVector& BoxExtent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.ForceCloseAdBanner (Underlying native function: ForceCloseAdBanner 0x9df0d34)
	static void ForceCloseAdBanner(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.FlushPersistentDebugLines (Underlying native function: FlushPersistentDebugLines 0x71a663c)
	static void FlushPersistentDebugLines(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.FlushDebugStrings (Underlying native function: FlushDebugStrings 0x71a663c)
	static void FlushDebugStrings(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ExecuteConsoleCommand (Underlying native function: ExecuteConsoleCommand 0x9deed0c)
	static void ExecuteConsoleCommand(class UObject*& WorldContextObject, struct FString& Command, class APlayerController*& SpecificPlayer); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.EqualEqual_SoftObjectReference (Underlying native function: EqualEqual_SoftObjectReference 0x9dee380)
	static bool EqualEqualSoftObjectReference(struct TWeakObjectPtr<class UObject>& A, struct TWeakObjectPtr<class UObject>& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.EqualEqual_SoftClassReference (Underlying native function: EqualEqual_SoftClassReference 0x9dee380)
	static bool EqualEqualSoftClassReference(struct TWeakObjectPtr<class UClass>& A, struct TWeakObjectPtr<class UClass>& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetType (Underlying native function: EqualEqual_PrimaryAssetType 0x6aa3890)
	static bool EqualEqualPrimaryAssetType(struct FPrimaryAssetType& A, struct FPrimaryAssetType& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.EqualEqual_PrimaryAssetId (Underlying native function: EqualEqual_PrimaryAssetId 0x6aa37c4)
	static bool EqualEqualPrimaryAssetId(struct FPrimaryAssetId*& A, struct FPrimaryAssetId*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.EndTransaction (Underlying native function: EndTransaction 0x8607f88)
	static int EndTransaction(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugString (Underlying native function: DrawDebugString 0x9deccd0)
	static void DrawDebugString(class UObject*& WorldContextObject, struct FVector& TextLocation, struct FString& Text, class AActor*& TestBaseActor, struct FLinearColor& TextColor, float& Duration); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugSphere (Underlying native function: DrawDebugSphere 0x9decb00)
	static void DrawDebugSphere(class UObject*& WorldContextObject, struct FVector& Center, float& Radius, int& Segments, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugPoint (Underlying native function: DrawDebugPoint 0x9dec9a8)
	static void DrawDebugPoint(class UObject*& WorldContextObject, struct FVector& Position, float& Size, struct FLinearColor& PointColor, float& Duration); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugPlane (Underlying native function: DrawDebugPlane 0x9dec814)
	static void DrawDebugPlane(class UObject*& WorldContextObject, struct FPlane& PlaneCoordinates, struct FVector& Location, float& Size, struct FLinearColor& PlaneColor, float& Duration); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugLine (Underlying native function: DrawDebugLine 0x9dec684)
	static void DrawDebugLine(class UObject*& WorldContextObject, struct FVector& LineStart, struct FVector& LineEnd, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugFrustum (Underlying native function: DrawDebugFrustum 0x9dec4c0)
	static void DrawDebugFrustum(class UObject*& WorldContextObject, struct FTransform& FrustumTransform, struct FLinearColor& FrustumColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugFloatHistoryTransform (Underlying native function: DrawDebugFloatHistoryTransform 0x9dec298)
	static void DrawDebugFloatHistoryTransform(class UObject*& WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FTransform& DrawTransform, struct FVector2D& DrawSize, struct FLinearColor& DrawColor, float& Duration); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugFloatHistoryLocation (Underlying native function: DrawDebugFloatHistoryLocation 0x9dec0d8)
	static void DrawDebugFloatHistoryLocation(class UObject*& WorldContextObject, struct FDebugFloatHistory& FloatHistory, struct FVector& DrawLocation, struct FVector2D& DrawSize, struct FLinearColor& DrawColor, float& Duration); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCylinder (Underlying native function: DrawDebugCylinder 0x9debed0)
	static void DrawDebugCylinder(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, int& Segments, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCoordinateSystem (Underlying native function: DrawDebugCoordinateSystem 0x9debd3c)
	static void DrawDebugCoordinateSystem(class UObject*& WorldContextObject, struct FVector& AxisLoc, struct FRotator& AxisRot, float& Scale, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugConeInDegrees (Underlying native function: DrawDebugConeInDegrees 0x9debab8)
	static void DrawDebugConeInDegrees(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& Direction, float& Length, float& AngleWidth, float& AngleHeight, int& NumSides, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCone (Underlying native function: DrawDebugCone 0x9debab8)
	static void DrawDebugCone(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& Direction, float& Length, float& AngleWidth, float& AngleHeight, int& NumSides, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCircle (Underlying native function: DrawDebugCircle 0x9deb838)
	static void DrawDebugCircle(class UObject*& WorldContextObject, struct FVector& Center, float& Radius, int& NumSegments, struct FLinearColor& LineColor, float& Duration, float& Thickness, struct FVector& YAxis, struct FVector& ZAxis, bool& bDrawAxis); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCapsule (Underlying native function: DrawDebugCapsule 0x9deb630)
	static void DrawDebugCapsule(class UObject*& WorldContextObject, struct FVector& Center, float& HalfHeight, float& Radius, struct FRotator& Rotation, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugCamera (Underlying native function: DrawDebugCamera 0x9deb54c)
	static void DrawDebugCamera(class ACameraActor*& CameraActor, struct FLinearColor& CameraColor, float& Duration); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugBox (Underlying native function: DrawDebugBox 0x9deb37c)
	static void DrawDebugBox(class UObject*& WorldContextObject, struct FVector& Center, struct FVector& Extent, struct FLinearColor& LineColor, struct FRotator& Rotation, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DrawDebugArrow (Underlying native function: DrawDebugArrow 0x9deb1b0)
	static void DrawDebugArrow(class UObject*& WorldContextObject, struct FVector& LineStart, struct FVector& LineEnd, float& ArrowSize, struct FLinearColor& LineColor, float& Duration, float& Thickness); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.DoesImplementInterface (Underlying native function: DoesImplementInterface 0x9deb024)
	static bool DoesImplementInterface(class UObject*& TestObject, class UClass*& Interface); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.DelayUntilNextTick (Underlying native function: DelayUntilNextTick 0x245af84)
	static void DelayUntilNextTick(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.Delay (Underlying native function: Delay 0x1188218)
	static void Delay(class UObject*& WorldContextObject, float& Duration, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CreateCopyForUndoBuffer (Underlying native function: CreateCopyForUndoBuffer 0x71a663c)
	static void CreateCopyForUndoBuffer(class UObject*& ObjectToModify); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ConvertToRelativePath (Underlying native function: ConvertToRelativePath 0x9de8c10)
	static struct FString ConvertToRelativePath(struct FString& Filename); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.ConvertToAbsolutePath (Underlying native function: ConvertToAbsolutePath 0x9de8a9c)
	static struct FString ConvertToAbsolutePath(struct FString& Filename); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftObjRefToSoftObjPath (Underlying native function: Conv_SoftObjRefToSoftObjPath 0x9de7060)
	static struct FSoftObjectPath ConvSoftObjRefToSoftObjPath(struct TWeakObjectPtr<class UObject>& SoftObjectReference); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftObjRefToSoftClassPath (Underlying native function: Conv_SoftObjRefToSoftClassPath 0x9de6d38)
	static struct FSoftClassPath ConvSoftObjRefToSoftClassPath(struct TWeakObjectPtr<class UClass>& SoftClassReference); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftObjPathToSoftObjRef (Underlying native function: Conv_SoftObjPathToSoftObjRef 0x9de6bf4)
	static struct TWeakObjectPtr<class UObject> ConvSoftObjPathToSoftObjRef(struct FSoftObjectPath& SoftObjectPath); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToString (Underlying native function: Conv_SoftObjectReferenceToString 0x9de6978)
	static struct FString ConvSoftObjectReferenceToString(struct TWeakObjectPtr<class UObject>& SoftObjectReference); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftObjectReferenceToObject (Underlying native function: Conv_SoftObjectReferenceToObject 0x14e78c8)
	static class UObject* ConvSoftObjectReferenceToObject(struct TWeakObjectPtr<class UObject>& SoftObject); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftClassReferenceToString (Underlying native function: Conv_SoftClassReferenceToString 0x9de6978)
	static struct FString ConvSoftClassReferenceToString(struct TWeakObjectPtr<class UClass>& SoftClassReference); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftClassReferenceToClass (Underlying native function: Conv_SoftClassReferenceToClass 0x9de675c)
	static class UClass* ConvSoftClassReferenceToClass(struct TWeakObjectPtr<class UClass>& SoftClass); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_SoftClassPathToSoftClassRef (Underlying native function: Conv_SoftClassPathToSoftClassRef 0x9de663c)
	static struct TWeakObjectPtr<class UClass> ConvSoftClassPathToSoftClassRef(struct FSoftClassPath& SoftClassPath); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_PrimaryAssetTypeToString (Underlying native function: Conv_PrimaryAssetTypeToString 0x9b9db88)
	static struct FString ConvPrimaryAssetTypeToString(struct FPrimaryAssetType& PrimaryAssetType); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_PrimaryAssetIdToString (Underlying native function: Conv_PrimaryAssetIdToString 0x9de62bc)
	static struct FString ConvPrimaryAssetIdToString(struct FPrimaryAssetId*& PrimaryAssetId); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_ObjectToSoftObjectReference (Underlying native function: Conv_ObjectToSoftObjectReference 0x2446ab8)
	static struct TWeakObjectPtr<class UObject> ConvObjectToSoftObjectReference(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_ObjectToClass (Underlying native function: Conv_ObjectToClass 0x9de5fb4)
	static class UClass* ConvObjectToClass(class UObject*& Object, class UClass*& Class); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_InterfaceToObject (Underlying native function: Conv_InterfaceToObject 0x2506568)
	static class UObject* ConvInterfaceToObject(struct TScriptInterface<class IInterface>& Interface); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.Conv_ClassToSoftClassReference (Underlying native function: Conv_ClassToSoftClassReference 0x9de4c68)
	static struct TWeakObjectPtr<class UClass> ConvClassToSoftClassReference(class UClass*& Class); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.ControlScreensaver (Underlying native function: ControlScreensaver 0x71a6cc4)
	static void ControlScreensaver(bool& bAllowScreenSaver); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ComponentOverlapComponents (Underlying native function: ComponentOverlapComponents 0x9de3cb4)
	static bool ComponentOverlapComponents(class UPrimitiveComponent*& Component, struct FTransform& ComponentTransform, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ComponentClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class UPrimitiveComponent*>& OutComponents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.ComponentOverlapActors (Underlying native function: ComponentOverlapActors 0x9de3a04)
	static bool ComponentOverlapActors(class UPrimitiveComponent*& Component, struct FTransform& ComponentTransform, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CollectGarbage (Underlying native function: CollectGarbage 0x76c5490)
	static void CollectGarbage(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingleForObjects (Underlying native function: CapsuleTraceSingleForObjects 0x9de2ddc)
	static bool CapsuleTraceSingleForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingleByProfile (Underlying native function: CapsuleTraceSingleByProfile 0x9de2978)
	static bool CapsuleTraceSingleByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceSingle (Underlying native function: CapsuleTraceSingle 0x9de2510)
	static bool CapsuleTraceSingle(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMultiForObjects (Underlying native function: CapsuleTraceMultiForObjects 0x20f6df8)
	static bool CapsuleTraceMultiForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMultiByProfile (Underlying native function: CapsuleTraceMultiByProfile 0x9de20a0)
	static bool CapsuleTraceMultiByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleTraceMulti (Underlying native function: CapsuleTraceMulti 0x9de1c30)
	static bool CapsuleTraceMulti(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, float& Radius, float& HalfHeight, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleOverlapComponents (Underlying native function: CapsuleOverlapComponents 0x9de1964)
	static bool CapsuleOverlapComponents(class UObject*& WorldContextObject, struct FVector& CapsulePos, float& Radius, float& HalfHeight, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ComponentClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class UPrimitiveComponent*>& OutComponents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CapsuleOverlapActors (Underlying native function: CapsuleOverlapActors 0x9de1698)
	static bool CapsuleOverlapActors(class UObject*& WorldContextObject, struct FVector& CapsulePos, float& Radius, float& HalfHeight, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CanLaunchURL (Underlying native function: CanLaunchURL 0x9de1530)
	static bool CanLaunchURL(struct FString& URL); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.CancelTransaction (Underlying native function: CancelTransaction 0x7239740)
	static void CancelTransaction(int& Index); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BreakSoftObjectPath (Underlying native function: BreakSoftObjectPath 0x9dde39c)
	static void BreakSoftObjectPath(struct FSoftObjectPath& InSoftObjectPath, struct FString& PathString); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.BreakSoftClassPath (Underlying native function: BreakSoftClassPath 0x9dde0cc)
	static void BreakSoftClassPath(struct FSoftClassPath& InSoftClassPath, struct FString& PathString); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.BreakARFilter (Underlying native function: BreakARFilter 0x9ddcc8c)
	static void BreakARFilter(struct FARFilter& InARFilter, struct TArray<struct FName>& PackageNames, struct TArray<struct FName>& PackagePaths, struct TArray<struct FSoftObjectPath>& SoftObjectPaths, struct TArray<struct FTopLevelAssetPath*>& ClassPaths, struct TSet<struct FTopLevelAssetPath*>& RecursiveClassPathsExclusionSet, struct TArray<struct FName>& ClassNames, struct TSet<struct FName>& RecursiveClassesExclusionSet, bool& bRecursivePaths, bool& bRecursiveClasses, bool& bIncludeOnlyOnDiskAssets); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceSingleForObjects (Underlying native function: BoxTraceSingleForObjects 0x9ddc7dc)
	static bool BoxTraceSingleForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceSingleByProfile (Underlying native function: BoxTraceSingleByProfile 0x9ddc350)
	static bool BoxTraceSingleByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceSingle (Underlying native function: BoxTraceSingle 0x9ddbec0)
	static bool BoxTraceSingle(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct FHitResult& OutHit, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceMultiForObjects (Underlying native function: BoxTraceMultiForObjects 0x9ddba0c)
	static bool BoxTraceMultiForObjects(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceMultiByProfile (Underlying native function: BoxTraceMultiByProfile 0x9ddb578)
	static bool BoxTraceMultiByProfile(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct FName& ProfileName, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxTraceMulti (Underlying native function: BoxTraceMulti 0x20f6620)
	static bool BoxTraceMulti(class UObject*& WorldContextObject, struct FVector& Start, struct FVector& End, struct FVector& HalfSize, struct FRotator& Orientation, struct TEnumAsByte<ETraceTypeQuery>& TraceChannel, bool& bTraceComplex, struct TArray<class AActor*>& ActorsToIgnore, struct TEnumAsByte<EDrawDebugTrace>& DrawDebugType, struct TArray<struct FHitResult>& OutHits, bool& bIgnoreSelf, struct FLinearColor& TraceColor, struct FLinearColor& TraceHitColor, float& DrawTime); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxOverlapComponents (Underlying native function: BoxOverlapComponents 0x9ddb2e0)
	static bool BoxOverlapComponents(class UObject*& WorldContextObject, struct FVector& BoxPos, struct FVector& Extent, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ComponentClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class UPrimitiveComponent*>& OutComponents); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BoxOverlapActors (Underlying native function: BoxOverlapActors 0x20f79d0)
	static bool BoxOverlapActors(class UObject*& WorldContextObject, struct FVector& BoxPos, struct FVector& BoxExtent, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, class UClass*& ActorClassFilter, struct TArray<class AActor*>& ActorsToIgnore, struct TArray<class AActor*>& OutActors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.BeginTransaction (Underlying native function: BeginTransaction 0x9ddadb4)
	static int BeginTransaction(struct FString& Context, struct FText& Description, class UObject*& PrimaryObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetSystemLibrary.AddFloatHistorySample (Underlying native function: AddFloatHistorySample 0x9dd8f8c)
	static struct FDebugFloatHistory AddFloatHistorySample(float& Value, struct FDebugFloatHistory& FloatHistory); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

