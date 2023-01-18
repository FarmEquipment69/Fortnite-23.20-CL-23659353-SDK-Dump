// Class /Script/Engine.PhysicsFieldStatics
// Size: 0x28
class UPhysicsFieldStatics : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.PhysicsFieldStatics.EvalPhysicsVectorField (Underlying native function: EvalPhysicsVectorField 0x9ef4100)
	static struct FVector EvalPhysicsVectorField(class UObject*& WorldContextObject, struct FVector& WorldPosition, struct TEnumAsByte<EFieldVectorType>& VectorType); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsFieldStatics.EvalPhysicsScalarField (Underlying native function: EvalPhysicsScalarField 0x9ef3ff0)
	static float EvalPhysicsScalarField(class UObject*& WorldContextObject, struct FVector& WorldPosition, struct TEnumAsByte<EFieldScalarType>& ScalarType); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PhysicsFieldStatics.EvalPhysicsIntegerField (Underlying native function: EvalPhysicsIntegerField 0x9ef3ee0)
	static int EvalPhysicsIntegerField(class UObject*& WorldContextObject, struct FVector& WorldPosition, struct TEnumAsByte<EFieldIntegerType>& IntegerType); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

