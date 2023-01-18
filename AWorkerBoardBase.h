// Class /Script/FortniteGame.WorkerBoardBase
// Size: 0x2b8
class AWorkerBoardBase : public AActor
{
	struct TArray<class UStaticMeshComponent*> WorkerPortraitComponents; // 0x288 (0x10)
	struct TArray<class UFortWorker*> WorkerItems; // 0x298 (0x10)
	unsigned char padding_2a8[0x10]; // 0x2a8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.WorkerBoardBase.SetupWorkerPortraits (Underlying native function: SetupWorkerPortraits 0x8a08e38)
	void SetupWorkerPortraits(struct TArray<class UStaticMeshComponent*>& InWorkerPortraitComponents, struct TArray<class UFortItem*>& InWorkerItems); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteGame.WorkerBoardBase.HandlePreviewImagesLoaded (Underlying native function: HandlePreviewImagesLoaded 0x8a07d88)
	void HandlePreviewImagesLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteGame.WorkerBoardBase.HandleIconDefinitionsLoaded (Underlying native function: HandleIconDefinitionsLoaded 0x8a07c10)
	void HandleIconDefinitionsLoaded(); // (Final | Native | Private)
};

