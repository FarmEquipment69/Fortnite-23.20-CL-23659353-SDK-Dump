// Class /Script/FortniteGame.FortRelevancyZoneIndicator
// Size: 0x480
class AFortRelevancyZoneIndicator : public AActor
{
	class UStaticMeshComponent* RelevancyZoneMesh; // 0x288 (0x8)
	class UStaticMeshComponent* CustomDepthMesh; // 0x290 (0x8)
	float RelevancyZoneToWorldScale; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	class UMaterialInterface* MiniMapNetRelevancyOverlayMaterial; // 0x2a0 (0x8)
	class UMaterialInterface* MiniMapNetRelevancyCircleMaterial; // 0x2a8 (0x8)
	class UMaterialInstanceDynamic* MinimapNetRelevancyOverlayMID; // 0x2b0 (0x8)
	unsigned char unreflected_2b8[0x8]; // 0x2b8 (0x8) 
	struct FSlateBrush MinimapNetRelevancyOverlayBrush; // 0x2c0 (0xc0)
	class UMaterialInstanceDynamic* MinimapNetRelevancyCircleMID; // 0x380 (0x8)
	unsigned char unreflected_388[0x8]; // 0x388 (0x8) 
	struct FSlateBrush MinimapNetRelevancyCircleBrush; // 0x390 (0xc0)
	unsigned char padding_450[0x30]; // 0x450 (0x30)
};

