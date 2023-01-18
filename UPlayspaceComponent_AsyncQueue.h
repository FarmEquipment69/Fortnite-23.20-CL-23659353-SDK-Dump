// Class /Script/FortniteGame.PlayspaceComponent_AsyncQueue
// Size: 0x108
class UPlayspaceComponent_AsyncQueue : public UFortPlayspaceComponent
{
	class UAsyncTraceQueue* AsyncTraceQueue; // 0xf8 (0x8)
	class UAsyncOverlapQueue* AsyncOverlapQueue; // 0x100 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.PlayspaceComponent_AsyncQueue.GetAsyncTraceQueue (Underlying native function: GetAsyncTraceQueue 0x8ddda2c)
	static class UAsyncTraceQueue* GetAsyncTraceQueue(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.PlayspaceComponent_AsyncQueue.GetAsyncOverlapQueue (Underlying native function: GetAsyncOverlapQueue 0x8ddd8f4)
	static class UAsyncOverlapQueue* GetAsyncOverlapQueue(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable)
};

