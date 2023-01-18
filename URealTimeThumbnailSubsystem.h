// Class /Script/FortniteGame.RealTimeThumbnailSubsystem
// Size: 0x70
class URealTimeThumbnailSubsystem : public UGameInstanceSubsystem
{
	unsigned char unreflected_70[0x70]; 

	/* Functions */

	// Function /Script/FortniteGame.RealTimeThumbnailSubsystem.DestroyThumbnailRenderer (Underlying native function: DestroyThumbnailRenderer 0x8fbcf64)
	void DestroyThumbnailRenderer(class UFortThumbnailRenderer*& ThumbnailRenderer); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.RealTimeThumbnailSubsystem.CreateThumbnailRenderer (Underlying native function: CreateThumbnailRenderer 0x8fbced4)
	class UFortThumbnailRenderer* CreateThumbnailRenderer(class UClass*& ThumbnailRendererClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

