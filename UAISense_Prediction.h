// Class /Script/AIModule.AISense_Prediction
// Size: 0x90
class UAISense_Prediction : public UAISense
{
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x80 (0x10)

	/* Functions */

	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent (Underlying native function: RequestPawnPredictionEvent 0xa1e39e4)
	static void RequestPawnPredictionEvent(class APawn*& Requestor, class AActor*& PredictedActor, float& PredictionTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent (Underlying native function: RequestControllerPredictionEvent 0xa1e38e4)
	static void RequestControllerPredictionEvent(class AAIController*& Requestor, class AActor*& PredictedActor, float& PredictionTime); // (Final | Native | Static | Public | BlueprintCallable)
};

