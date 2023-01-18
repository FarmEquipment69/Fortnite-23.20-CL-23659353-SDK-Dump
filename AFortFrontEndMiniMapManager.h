// Class /Script/FortniteGame.FortFrontEndMiniMapManager
// Size: 0x4c8
class AFortFrontEndMiniMapManager : public AActor
{
	unsigned char unreflected_288[0x8]; // 0x288 (0x8) 
	struct TArray<struct FFortChallengeMapPoiData> PoiDataConfigOverrides; // 0x290 (0x10)
	struct TArray<struct FString> ExcludedFromMapNameDisplayPOIs; // 0x2a0 (0x10)
	int MapLocationFontSizeOverride; // 0x2b0 (0x4)
	struct FLinearColor DefaultMapLocationFontColor[0x3]; // 0x2b4 (0x10) (ARRAY) 
	unsigned char unreflected_2e4[0x4]; // 0x2e4 (0x4) 
	struct FSlateFontInfo DefaultMapLocationFont; // 0x2e8 (0x58)
	uint32_t MobileMapLocationFontSizeOverride; // 0x340 (0x4)
	struct FGameplayTag SpybaseTag; // 0x344 (0x4)
	class UFortQuestItemDefinition* NamedLocationQuestItemDefinition; // 0x348 (0x8)
	class UFortQuestItemDefinition* POIQuestItemDefinition; // 0x350 (0x8)
	int MapLayerSize; // 0x358 (0x4)
	struct FMargin MapMargin; // 0x35c (0x10)
	unsigned char unreflected_36c[0x4]; // 0x36c (0x4) 
	class UMaterialInterface* MapMaterial; // 0x370 (0x8)
	class UMaterialInterface* MapMaskMaterial; // 0x378 (0x8)
	float MapWorldScale; // 0x380 (0x4)
	unsigned char unreflected_384[0x4]; // 0x384 (0x4) 
	struct FVector2D CaptureResolution; // 0x388 (0x10)
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer1; // 0x398 (0x50)
	struct TMap<struct FGameplayTag, struct FMapLocationRenderData> MinimapLocationRenderDataPlayer2; // 0x3e8 (0x50)
	struct FSlateFontInfo MapLocationFont; // 0x438 (0x58)
	class UMaterialInstanceDynamic* MapMaterialMID; // 0x490 (0x8)
	class UMaterialInstanceDynamic* MapMaskMaterialMID; // 0x498 (0x8)
	unsigned char padding_4a0[0x28]; // 0x4a0 (0x28)
};

