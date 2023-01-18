// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C
// Size: 0x331
class UPlayerBanner_C : public UFortAccountWidgetBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2c8 (0x8)
	class UImage* BannerImage; // 0x2d0 (0x8)
	class UCommonLoadGuard* LoadGuard; // 0x2d8 (0x8)
	class UImage* SurroundImage; // 0x2e0 (0x8)
	class UCommonLoadGuard* SurroundLoadGuard; // 0x2e8 (0x8)
	bool bUseLargeTexture; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x7]; // 0x2f1 (0x7) 
	struct FUniqueNetIdRepl OwnerNetId; // 0x2f8 (0x30)
	struct FName CurrentBannerColorId; // 0x328 (0x4)
	struct FName CurrentBannerIconId; // 0x32c (0x4)
	bool SurroundEnabled; // 0x330 (0x1)

	/* Functions */

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.UnbindDelegates (Has no native function)
	void UnbindDelegates(class UFortMcpContext*& CallFuncGetContextReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetupSurround (Has no native function)
	void SetupSurround(struct FMargin& K2NodeMakeStructMargin, class ULoadGuardSlot*& K2NodeDynamicCastAsLoadGuardSlot, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile (Has no native function)
	void SetBannerIconAndColorFromProfile(class UFortMcpContext*& CallFuncGetContextReturnValue, struct FFortAthenaLoadout& CallFuncGetLoadoutForPlayerReturnValue, struct FName& CallFuncConvStringToNameReturnValue, struct FName& CallFuncConvStringToNameReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconAndColor (Has no native function)
	void SetBannerIconAndColor(struct FName& IconId, struct FName& ColorId); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ToggleBannerMask (Has no native function)
	void ToggleBannerMask(bool& Enable, bool& TempboolVariable, double& TemprealVariable, double& TemprealVariable1, class UMaterialInstanceDynamic*& CallFuncGetBannerMIDBannerMID, double& K2NodeSelectDefault, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.RefreshSurround (Has no native function)
	void RefreshSurround(int& Level, struct FAthenaSeasonBannerLevel& CallFuncGetSeasonBannerInfoReturnValue, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue, class UObject*& CallFuncConvSoftObjectReferenceToObjectReturnValue, bool& CallFuncIsAssetNullReturnValue, class UMaterialInterface*& K2NodeDynamicCastAsMaterialInterface, bool& K2NodeDynamicCastbSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded (Has no native function)
	void OnSurroundIconLoaded(class UObject*& LoadedObject, class UTexture*& K2NodeDynamicCastAsTexture, bool& K2NodeDynamicCastbSuccess, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.EnableSurround (Has no native function)
	void EnableSurround(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ClearBannerState (Has no native function)
	void ClearBannerState(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.OnBannerIconLoaded (Has no native function)
	void OnBannerIconLoaded(class UObject*& LoadedObject, class UMaterialInstanceDynamic*& CallFuncGetBannerMIDBannerMID, class UTexture*& K2NodeDynamicCastAsTexture, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.GetBannerMID (Has no native function)
	void GetBannerMID(class UMaterialInstanceDynamic*& BannerMID, class UMaterialInstanceDynamic*& CallFuncGetDynamicMaterialReturnValue); // (Private | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerOwner (Has no native function)
	void SetBannerOwner(struct FUniqueNetIdRepl& OwnerId, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UFortMcpContext*& CallFuncGetContextReturnValue, bool& CallFuncIsValidUniqueNetIdReplReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerColorId (Has no native function)
	void SetBannerColorId(struct FName& InBannerColorId, class UMaterialInstanceDynamic*& CallFuncGetBannerMIDBannerMID, bool& CallFuncNotEqualNameNameReturnValue, struct FHomebaseBannerColor& CallFuncGetBannerColorFromRowNameReturnValue, class UMaterialInstanceDynamic*& CallFuncGetBannerMIDBannerMID1, struct FLinearColor& CallFuncGetSecondaryColorReturnValue, struct FLinearColor& CallFuncGetPrimaryColorReturnValue, bool& CallFuncNotEqualNameNameReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconId (Has no native function)
	void SetBannerIconId(struct FName& InBannerIconId, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& TempboolOptionBIffalseuseOptionAVariable, bool& CallFuncNotEqualNameNameReturnValue, bool& TempboolVariable, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetBannerSmallIconAssetFromRowNameReturnValue, struct TWeakObjectPtr<class UTexture2D>& CallFuncGetBannerLargeIconAssetFromRowNameReturnValue, struct TWeakObjectPtr<class UObject>& K2NodeSelectDefault, class UMaterialInstanceDynamic*& CallFuncGetBannerMIDBannerMID, bool& CallFuncNotEqualNameNameReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerImage (Has no native function)
	void SetBannerImage(struct FFortHomeBaseInfo& Imageinfo, bool& Success, struct FName& CallFuncConvStringToNameReturnValue, struct FName& CallFuncConvStringToNameReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.Account Info Changed (Has no native function)
	void AccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.Destruct (Has no native function)
	void Destruct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner (Has no native function)
	void ExecuteUbergraphPlayerBanner(int& EntryPoint, struct FFortPublicAccountInfo& K2NodeCustomEventNewInfo); // (Final | 0x00008000 | HasDefaults)
};

