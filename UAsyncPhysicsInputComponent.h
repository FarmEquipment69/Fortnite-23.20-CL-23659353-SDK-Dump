// Class /Script/Engine.AsyncPhysicsInputComponent
// Size: 0xc8
class UAsyncPhysicsInputComponent : public UActorComponent
{
	class UClass* DataClass; // 0xa0 (0x8)
	struct TArray<class UAsyncPhysicsData*> BufferedData; // 0xa8 (0x10)
	class UAsyncPhysicsData* DataToConsume; // 0xb8 (0x8)
	class UAsyncPhysicsData* DataToWrite; // 0xc0 (0x8)

	/* Functions */

	// Function /Script/Engine.AsyncPhysicsInputComponent.ServerRPCBufferInput (Underlying native function: ServerRPCBufferInput 0x709e37c)
	void ServerRPCBufferInput(class UAsyncPhysicsData*& AsyncPhysicsData); // (Net | Native | Event | Public | NetServer)

	// Function /Script/Engine.AsyncPhysicsInputComponent.GetDataToWrite (Underlying native function: GetDataToWrite 0x9ec9ca8)
	class UAsyncPhysicsData* GetDataToWrite(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.AsyncPhysicsInputComponent.GetDataToConsume (Underlying native function: GetDataToConsume 0x9ec9c84)
	class UAsyncPhysicsData* GetDataToConsume(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

