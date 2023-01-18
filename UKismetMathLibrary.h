// Class /Script/Engine.KismetMathLibrary
// Size: 0x28
class UKismetMathLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetMathLibrary.Xor_IntInt (Underlying native function: Xor_IntInt 0x9e20758)
	static int XorIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Xor_Int64Int64 (Underlying native function: Xor_Int64Int64 0x9e20698)
	static int64_t XorInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.wrap (Underlying native function: wrap 0x9e20590)
	static int wrap(int& Value, int& min, int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_FVector (Underlying native function: WeightedMovingAverage_FVector 0x9e20330)
	static struct FVector WeightedMovingAverageFVector(struct FVector& CurrentSample, struct FVector& PreviousSample, float& Weight); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_FRotator (Underlying native function: WeightedMovingAverage_FRotator 0x9e201ec)
	static struct FRotator WeightedMovingAverageFRotator(struct FRotator& CurrentSample, struct FRotator& PreviousSample, float& Weight); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.WeightedMovingAverage_Float (Underlying native function: WeightedMovingAverage_Float 0x9e20474)
	static float WeightedMovingAverageFloat(float& CurrentSample, float& PreviousSample, float& Weight); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSizeXYSquared (Underlying native function: VSizeXYSquared 0x9e1bec8)
	static double VSizeXYSquared(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSizeXY (Underlying native function: VSizeXY 0x9e1be38)
	static double VSizeXY(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSizeSquared (Underlying native function: VSizeSquared 0x9e1bda0)
	static double VSizeSquared(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSize2DSquared (Underlying native function: VSize2DSquared 0x9e1bd14)
	static double VSize2DSquared(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSize2D (Underlying native function: VSize2D 0x9e1bc84)
	static double VSize2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VSize (Underlying native function: VSize 0x20907b8)
	static double VSize(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VLerp (Underlying native function: VLerp 0x239ce38)
	static struct FVector VLerp(struct FVector& A, struct FVector& B, float& Alpha); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VInterpTo_Constant (Underlying native function: VInterpTo_Constant 0x9e1bb0c)
	static struct FVector VInterpToConstant(struct FVector& Current, struct FVector& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VInterpTo (Underlying native function: VInterpTo 0x9e1b994)
	static struct FVector VInterpTo(struct FVector& Current, struct FVector& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VectorSpringInterp (Underlying native function: VectorSpringInterp 0x9e1d684)
	static struct FVector VectorSpringInterp(struct FVector& Current, struct FVector& Target, struct FVectorSpringState& SpringState, float& Stiffness, float& CriticalDampingFactor, float& DeltaTime, float& Mass, float& TargetVelocityAmount, bool& bClamp, struct FVector& MinValue, struct FVector& MaxValue, bool& bInitializeFromTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector_Zero (Underlying native function: Vector_Zero 0x9e201c4)
	static struct FVector VectorZero(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Up (Underlying native function: Vector_Up 0x28c564c)
	static struct FVector VectorUp(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_UnwindEuler (Underlying native function: Vector_UnwindEuler 0x9e20128)
	static void VectorUnwindEuler(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector_UnitCartesianToSpherical (Underlying native function: Vector_UnitCartesianToSpherical 0x9e20038)
	static struct FVector2D VectorUnitCartesianToSpherical(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ToRadians (Underlying native function: Vector_ToRadians 0x9e1ffa8)
	static struct FVector VectorToRadians(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ToDegrees (Underlying native function: Vector_ToDegrees 0x9e1ff18)
	static struct FVector VectorToDegrees(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_SnappedToGrid (Underlying native function: Vector_SnappedToGrid 0x9e1fd54)
	static struct FVector VectorSnappedToGrid(struct FVector& InVect, float& InGridSize); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Set (Underlying native function: Vector_Set 0x9e1fbfc)
	static void VectorSet(struct FVector& A, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector_Right (Underlying native function: Vector_Right 0x9e1fbd4)
	static struct FVector VectorRight(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Reciprocal (Underlying native function: Vector_Reciprocal 0x9e1faf4)
	static struct FVector VectorReciprocal(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ProjectOnToNormal (Underlying native function: Vector_ProjectOnToNormal 0x9e1f9fc)
	static struct FVector VectorProjectOnToNormal(struct FVector& V, struct FVector& InNormal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_One (Underlying native function: Vector_One 0x2f5d8a0)
	static struct FVector VectorOne(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_NormalUnsafe (Underlying native function: Vector_NormalUnsafe 0x9e1f7c8)
	static struct FVector VectorNormalUnsafe(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Normalize (Underlying native function: Vector_Normalize 0x9e1f8bc)
	static void VectorNormalize(struct FVector& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector_Normal2D (Underlying native function: Vector_Normal2D 0x9e1f664)
	static struct FVector VectorNormal2D(struct FVector& A, float& Tolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_MirrorByPlane (Underlying native function: Vector_MirrorByPlane 0x9e1f514)
	static struct FVector VectorMirrorByPlane(struct FVector& A, struct FPlane& InPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Left (Underlying native function: Vector_Left 0x9e1f4ec)
	static struct FVector VectorLeft(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsZero (Underlying native function: Vector_IsZero 0x9e1f44c)
	static bool VectorIsZero(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsUnit (Underlying native function: Vector_IsUnit 0x9e1f338)
	static bool VectorIsUnit(struct FVector& A, float& SquaredLenthTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsUniform (Underlying native function: Vector_IsUniform 0x9e1f21c)
	static bool VectorIsUniform(struct FVector& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsNormal (Underlying native function: Vector_IsNormal 0x9e1f15c)
	static bool VectorIsNormal(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsNearlyZero (Underlying native function: Vector_IsNearlyZero 0x9e1f04c)
	static bool VectorIsNearlyZero(struct FVector& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_IsNAN (Underlying native function: Vector_IsNAN 0x9e1ef90)
	static bool VectorIsNAN(struct FVector& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_HeadingAngle (Underlying native function: Vector_HeadingAngle 0x9e1ee54)
	static double VectorHeadingAngle(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_GetSignVector (Underlying native function: Vector_GetSignVector 0x9e1ed8c)
	static struct FVector VectorGetSignVector(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_GetProjection (Underlying native function: Vector_GetProjection 0x9e1ecf0)
	static struct FVector VectorGetProjection(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_GetAbsMin (Underlying native function: Vector_GetAbsMin 0x9e1ec54)
	static double VectorGetAbsMin(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_GetAbsMax (Underlying native function: Vector_GetAbsMax 0x9e1ebb8)
	static double VectorGetAbsMax(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_GetAbs (Underlying native function: Vector_GetAbs 0x9e1eb28)
	static struct FVector VectorGetAbs(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Forward (Underlying native function: Vector_Forward 0x9e1eb00)
	static struct FVector VectorForward(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Down (Underlying native function: Vector_Down 0x9e1ead8)
	static struct FVector VectorDown(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_DistanceSquared (Underlying native function: Vector_DistanceSquared 0x9e1e9f4)
	static double VectorDistanceSquared(struct FVector& v1, struct FVector& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Distance2DSquared (Underlying native function: Vector_Distance2DSquared 0x9e1e83c)
	static double VectorDistance2DSquared(struct FVector& v1, struct FVector& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Distance2D (Underlying native function: Vector_Distance2D 0x9e1e768)
	static double VectorDistance2D(struct FVector& v1, struct FVector& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Distance (Underlying native function: Vector_Distance 0x9e1e90c)
	static double VectorDistance(struct FVector& v1, struct FVector& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_CosineAngle2D (Underlying native function: Vector_CosineAngle2D 0x9e1e5dc)
	static double VectorCosineAngle2D(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ComponentMin (Underlying native function: Vector_ComponentMin 0x9e1e500)
	static struct FVector VectorComponentMin(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ComponentMax (Underlying native function: Vector_ComponentMax 0x9e1e424)
	static struct FVector VectorComponentMax(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ClampSizeMax2D (Underlying native function: Vector_ClampSizeMax2D 0x9e1e13c)
	static struct FVector VectorClampSizeMax2D(struct FVector& A, double& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ClampSizeMax (Underlying native function: Vector_ClampSizeMax 0x9e1e2a8)
	static struct FVector VectorClampSizeMax(struct FVector& A, double& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_ClampSize2D (Underlying native function: Vector_ClampSize2D 0x9e1df80)
	static struct FVector VectorClampSize2D(struct FVector& A, double& min, double& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_BoundedToCube (Underlying native function: Vector_BoundedToCube 0x9e1de70)
	static struct FVector VectorBoundedToCube(struct FVector& InVect, float& InRadius); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_BoundedToBox (Underlying native function: Vector_BoundedToBox 0x9e1dd2c)
	static struct FVector VectorBoundedToBox(struct FVector& InVect, struct FVector& InBoxMin, struct FVector& InBoxMax); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Backward (Underlying native function: Vector_Backward 0x9e1dd04)
	static struct FVector VectorBackward(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector_Assign (Underlying native function: Vector_Assign 0x9e1dc2c)
	static void VectorAssign(struct FVector& A, struct FVector& InVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector_AddBounded (Underlying native function: Vector_AddBounded 0x9e1dac4)
	static void VectorAddBounded(struct FVector& A, struct FVector& InAddVect, float& InRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Zero (Underlying native function: Vector4_Zero 0x9e1d664)
	static struct FVector4 Vector4Zero(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_SizeSquared3 (Underlying native function: Vector4_SizeSquared3 0x9e1d4e8)
	static double Vector4SizeSquared3(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_SizeSquared (Underlying native function: Vector4_SizeSquared 0x9e1d5a0)
	static double Vector4SizeSquared(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Size3 (Underlying native function: Vector4_Size3 0x9e1d364)
	static double Vector4Size3(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Size (Underlying native function: Vector4_Size 0x9e1d420)
	static double Vector4Size(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Set (Underlying native function: Vector4_Set 0x9e1d1b0)
	static void Vector4Set(struct FVector4& A, double& X, double& Y, double& Z, double& W); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector4_NormalUnsafe3 (Underlying native function: Vector4_NormalUnsafe3 0x9e1cf34)
	static struct FVector4 Vector4NormalUnsafe3(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Normalize3 (Underlying native function: Vector4_Normalize3 0x9e1d038)
	static void Vector4Normalize3(struct FVector4& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Normal3 (Underlying native function: Vector4_Normal3 0x9e1cdbc)
	static struct FVector4 Vector4Normal3(struct FVector4& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Negated (Underlying native function: Vector4_Negated 0x9e1cd10)
	static struct FVector4 Vector4Negated(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_MirrorByVector3 (Underlying native function: Vector4_MirrorByVector3 0x9e1cba0)
	static struct FVector4 Vector4MirrorByVector3(struct FVector4& Direction, struct FVector4& SurfaceNormal); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_IsZero (Underlying native function: Vector4_IsZero 0x9e1cae8)
	static bool Vector4IsZero(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_IsUnit3 (Underlying native function: Vector4_IsUnit3 0x9e1c9c0)
	static bool Vector4IsUnit3(struct FVector4& A, float& SquaredLenthTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_IsNormal3 (Underlying native function: Vector4_IsNormal3 0x9e1c8ec)
	static bool Vector4IsNormal3(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_IsNearlyZero3 (Underlying native function: Vector4_IsNearlyZero3 0x9e1c7cc)
	static bool Vector4IsNearlyZero3(struct FVector4& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_IsNAN (Underlying native function: Vector4_IsNAN 0x9e1c6ec)
	static bool Vector4IsNAN(struct FVector4& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_DotProduct3 (Underlying native function: Vector4_DotProduct3 0x9e1c498)
	static double Vector4DotProduct3(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_DotProduct (Underlying native function: Vector4_DotProduct 0x9e1c5bc)
	static double Vector4DotProduct(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_CrossProduct3 (Underlying native function: Vector4_CrossProduct3 0x9e1c34c)
	static struct FVector4 Vector4CrossProduct3(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector4_Assign (Underlying native function: Vector4_Assign 0x9e1c250)
	static void Vector4Assign(struct FVector4& A, struct FVector4& InVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Vector2DInterpTo_Constant (Underlying native function: Vector2DInterpTo_Constant 0x9e1c0a8)
	static struct FVector2D Vector2DInterpToConstant(struct FVector2D& Current, struct FVector2D& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector2DInterpTo (Underlying native function: Vector2DInterpTo 0x9e1bf54)
	static struct FVector2D Vector2DInterpTo(struct FVector2D& Current, struct FVector2D& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector2D_Zero (Underlying native function: Vector2D_Zero 0x9e1c234)
	static struct FVector2D Vector2DZero(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector2D_Unit45Deg (Underlying native function: Vector2D_Unit45Deg 0x9e1c218)
	static struct FVector2D Vector2DUnit45Deg(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Vector2D_One (Underlying native function: Vector2D_One 0x9e1c1fc)
	static struct FVector2D Vector2DOne(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.VEase (Underlying native function: VEase 0x9e1b798)
	static struct FVector VEase(struct FVector& A, struct FVector& B, float& Alpha, struct TEnumAsByte<EEasingFunc>& EasingFunc, float& BlendExp, int& Steps); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.UtcNow (Underlying native function: UtcNow 0x9e1b768)
	static struct FDateTime* UtcNow(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TransformVector4 (Underlying native function: TransformVector4 0x9e1aee8)
	static struct FVector4 TransformVector4(struct FMatrix& Matrix, struct FVector4& Vec4); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TransformRotation (Underlying native function: TransformRotation 0x237dc24)
	static struct FRotator TransformRotation(struct FTransform& T, struct FRotator& Rotation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TransformLocation (Underlying native function: TransformLocation 0x28680ac)
	static struct FVector TransformLocation(struct FTransform& T, struct FVector& Location); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TransformDirection (Underlying native function: TransformDirection 0x9e1ad88)
	static struct FVector TransformDirection(struct FTransform& T, struct FVector& Direction); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Transform_Determinant (Underlying native function: Transform_Determinant 0x9e1b08c)
	static float TransformDeterminant(struct FTransform& Transform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ToSign2D (Underlying native function: ToSign2D 0x9e1aa40)
	static struct FVector2D ToSign2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ToRounded2D (Underlying native function: ToRounded2D 0x9e1a940)
	static struct FVector2D ToRounded2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ToDirectionAndLength2D (Underlying native function: ToDirectionAndLength2D 0x9e1a668)
	static void ToDirectionAndLength2D(struct FVector2D& A, struct FVector2D& OutDir, double& OutLength); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Today (Underlying native function: Today 0x9e1ad44)
	static struct FDateTime* Today(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TLerp (Underlying native function: TLerp 0x25b6af4)
	static struct FTransform TLerp(struct FTransform& A, struct FTransform& B, float& Alpha, struct TEnumAsByte<ELerpInterpolationMode>& InterpMode); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TInterpTo (Underlying native function: TInterpTo 0x9e19ff4)
	static struct FTransform TInterpTo(struct FTransform& Current, struct FTransform& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TimespanZeroValue (Underlying native function: TimespanZeroValue 0x6cc27c4)
	static struct FTimespan* TimespanZeroValue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TimespanRatio (Underlying native function: TimespanRatio 0x9e1a594)
	static float TimespanRatio(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TimespanMinValue (Underlying native function: TimespanMinValue 0x9e1a578)
	static struct FTimespan* TimespanMinValue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TimespanMaxValue (Underlying native function: TimespanMaxValue 0x9e1a55c)
	static struct FTimespan* TimespanMaxValue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TimespanFromString (Underlying native function: TimespanFromString 0x9e1a394)
	static bool TimespanFromString(struct FString& TimespanString, struct FTimespan*& Result); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.TEase (Underlying native function: TEase 0x9e19d10)
	static struct FTransform TEase(struct FTransform& A, struct FTransform& B, float& Alpha, struct TEnumAsByte<EEasingFunc>& EasingFunc, float& BlendExp, int& Steps); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.tan (Underlying native function: tan 0x9e1a24c)
	static double tan(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_VectorVector (Underlying native function: Subtract_VectorVector 0x219e0b8)
	static struct FVector SubtractVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_VectorInt (Underlying native function: Subtract_VectorInt 0x9e19c38)
	static struct FVector SubtractVectorInt(struct FVector& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_VectorFloat (Underlying native function: Subtract_VectorFloat 0x9e19b60)
	static struct FVector SubtractVectorFloat(struct FVector& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_Vector4Vector4 (Underlying native function: Subtract_Vector4Vector4 0x9e19a2c)
	static struct FVector4 SubtractVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_Vector2DVector2D (Underlying native function: Subtract_Vector2DVector2D 0x9e19964)
	static struct FVector2D SubtractVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_Vector2DFloat (Underlying native function: Subtract_Vector2DFloat 0x9e19890)
	static struct FVector2D SubtractVector2DFloat(struct FVector2D& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_TimespanTimespan (Underlying native function: Subtract_TimespanTimespan 0x9e19388)
	static struct FTimespan* SubtractTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_QuatQuat (Underlying native function: Subtract_QuatQuat 0x9e197b0)
	static struct FQuat SubtractQuatQuat(struct FQuat& A, struct FQuat& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_LinearColorLinearColor (Underlying native function: Subtract_LinearColorLinearColor 0x9e196b0)
	static struct FLinearColor SubtractLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_IntPointIntPoint (Underlying native function: Subtract_IntPointIntPoint 0x9e195dc)
	static struct FIntPoint* SubtractIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_IntPointInt (Underlying native function: Subtract_IntPointInt 0x9e19508)
	static struct FIntPoint* SubtractIntPointInt(struct FIntPoint*& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_IntInt (Underlying native function: Subtract_IntInt 0x2103360)
	static int SubtractIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_Int64Int64 (Underlying native function: Subtract_Int64Int64 0x9e19448)
	static int64_t SubtractInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_DoubleDouble (Underlying native function: Subtract_DoubleDouble 0x1f6a408)
	static double SubtractDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_DateTimeTimespan (Underlying native function: Subtract_DateTimeTimespan 0x9e19388)
	static struct FDateTime* SubtractDateTimeTimespan(struct FDateTime*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_DateTimeDateTime (Underlying native function: Subtract_DateTimeDateTime 0x2c90aa0)
	static struct FTimespan* SubtractDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Subtract_ByteByte (Underlying native function: Subtract_ByteByte 0x9e192cc)
	static unsigned char SubtractByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Square (Underlying native function: Square 0x9e18f48)
	static double Square(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.sqrt (Underlying native function: sqrt 0x29188cc)
	static double sqrt(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Spherical2DToUnitCartesian (Underlying native function: Spherical2DToUnitCartesian 0x9e18e6c)
	static struct FVector Spherical2DToUnitCartesian(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.sin (Underlying native function: sin 0x9e17408)
	static double sin(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SignOfInteger64 (Underlying native function: SignOfInteger64 0x9e172f4)
	static int64_t SignOfInteger64(int64_t& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SignOfInteger (Underlying native function: SignOfInteger 0x9e17380)
	static int SignOfInteger(int& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SignOfFloat (Underlying native function: SignOfFloat 0x9e17250)
	static double SignOfFloat(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SetVectorSpringStateVelocity (Underlying native function: SetVectorSpringStateVelocity 0x9e16d58)
	static void SetVectorSpringStateVelocity(struct FVectorSpringState& SpringState, struct FVector& Velocity); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.SetRandomStreamSeed (Underlying native function: SetRandomStreamSeed 0x9e15da8)
	static void SetRandomStreamSeed(struct FRandomStream*& Stream, int& NewSeed); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.SetQuaternionSpringStateAngularVelocity (Underlying native function: SetQuaternionSpringStateAngularVelocity 0x9e15ca0)
	static void SetQuaternionSpringStateAngularVelocity(struct FQuaternionSpringState& SpringState, struct FVector& AngularVelocity); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.SetFloatSpringStateVelocity (Underlying native function: SetFloatSpringStateVelocity 0x9e154d0)
	static void SetFloatSpringStateVelocity(struct FFloatSpringState& SpringState, float& Velocity); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Set2D (Underlying native function: Set2D 0x9e14060)
	static void Set2D(struct FVector2D& A, double& X, double& Y); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.SelectVector (Underlying native function: SelectVector 0xecc5d4)
	static struct FVector SelectVector(struct FVector& A, struct FVector& B, bool& bPickA); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectTransform (Underlying native function: SelectTransform 0x209a1c4)
	static struct FTransform SelectTransform(struct FTransform& A, struct FTransform& B, bool& bPickA); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectString (Underlying native function: SelectString 0x25e49e0)
	static struct FString SelectString(struct FString& A, struct FString& B, bool& bPickA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectRotator (Underlying native function: SelectRotator 0x9e13f28)
	static struct FRotator SelectRotator(struct FRotator& A, struct FRotator& B, bool& bPickA); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectObject (Underlying native function: SelectObject 0x9e13e34)
	static class UObject* SelectObject(class UObject*& A, class UObject*& B, bool& bSelectA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectInt (Underlying native function: SelectInt 0xef3a54)
	static int SelectInt(int& A, int& B, bool& bPickA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectFloat (Underlying native function: SelectFloat 0x1fc8c28)
	static double SelectFloat(double& A, double& B, bool& bPickA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectColor (Underlying native function: SelectColor 0xecacf8)
	static struct FLinearColor SelectColor(struct FLinearColor& A, struct FLinearColor& B, bool& bPickA); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SelectClass (Underlying native function: SelectClass 0x9e13e34)
	static class UClass* SelectClass(class UClass*& A, class UClass*& B, bool& bSelectA); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.SeedRandomStream (Underlying native function: SeedRandomStream 0x9e13da8)
	static void SeedRandomStream(struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.SafeDivide (Underlying native function: SafeDivide 0x21e23d8)
	static double SafeDivide(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Round64 (Underlying native function: Round64 0x9e13ce0)
	static int64_t Round64(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.round (Underlying native function: round 0x228e954)
	static int round(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RotatorFromAxisAndAngle (Underlying native function: RotatorFromAxisAndAngle 0x9e13bec)
	static struct FRotator RotatorFromAxisAndAngle(struct FVector& Axis, float& Angle); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RotateAngleAxis (Underlying native function: RotateAngleAxis 0x23fc9bc)
	static struct FVector RotateAngleAxis(struct FVector& InVect, float& AngleDeg, struct FVector& Axis); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RLerp (Underlying native function: RLerp 0x9e0edf8)
	static struct FRotator RLerp(struct FRotator& A, struct FRotator& B, float& Alpha, bool& bShortestPath); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RInterpTo_Constant (Underlying native function: RInterpTo_Constant 0x9e0ec80)
	static struct FRotator RInterpToConstant(struct FRotator& Current, struct FRotator& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RInterpTo (Underlying native function: RInterpTo 0x2882894)
	static struct FRotator RInterpTo(struct FRotator& Current, struct FRotator& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RGBToHSV_Vector (Underlying native function: RGBToHSV_Vector 0x9e0eba8)
	static void RGBToHSVVector(struct FLinearColor& RGB, struct FLinearColor& HSV); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RGBToHSV (Underlying native function: RGBToHSV 0x1f704e0)
	static void RGBToHSV(struct FLinearColor& InColor, float& H, float& S, float& V, float& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RGBLinearToHSV (Underlying native function: RGBLinearToHSV 0x9e0eb18)
	static struct FLinearColor RGBLinearToHSV(struct FLinearColor& RGB); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ResetVectorSpringState (Underlying native function: ResetVectorSpringState 0x9e131f4)
	static void ResetVectorSpringState(struct FVectorSpringState& SpringState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.ResetRandomStream (Underlying native function: ResetRandomStream 0x9e13178)
	static void ResetRandomStream(struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.ResetQuaternionSpringState (Underlying native function: ResetQuaternionSpringState 0x9e130a8)
	static void ResetQuaternionSpringState(struct FQuaternionSpringState& SpringState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.ResetFloatSpringState (Underlying native function: ResetFloatSpringState 0x2736da8)
	static void ResetFloatSpringState(struct FFloatSpringState& SpringState); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.REase (Underlying native function: REase 0x9e0e8d8)
	static struct FRotator REase(struct FRotator& A, struct FRotator& B, float& Alpha, bool& bShortestPath, struct TEnumAsByte<EEasingFunc>& EasingFunc, float& BlendExp, int& Steps); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadiansFromStream (Underlying native function: RandomUnitVectorInEllipticalConeInRadiansFromStream 0x9e11038)
	static struct FVector RandomUnitVectorInEllipticalConeInRadiansFromStream(struct FVector& ConeDir, float& MaxYawInRadians, float& MaxPitchInRadians, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInRadians (Underlying native function: RandomUnitVectorInEllipticalConeInRadians 0x9e10f18)
	static struct FVector RandomUnitVectorInEllipticalConeInRadians(struct FVector& ConeDir, float& MaxYawInRadians, float& MaxPitchInRadians); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegreesFromStream (Underlying native function: RandomUnitVectorInEllipticalConeInDegreesFromStream 0x9e10db4)
	static struct FVector RandomUnitVectorInEllipticalConeInDegreesFromStream(struct FVector& ConeDir, float& MaxYawInDegrees, float& MaxPitchInDegrees, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInEllipticalConeInDegrees (Underlying native function: RandomUnitVectorInEllipticalConeInDegrees 0x9e10c80)
	static struct FVector RandomUnitVectorInEllipticalConeInDegrees(struct FVector& ConeDir, float& MaxYawInDegrees, float& MaxPitchInDegrees); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInRadiansFromStream (Underlying native function: RandomUnitVectorInConeInRadiansFromStream 0x9e10730)
	static struct FVector RandomUnitVectorInConeInRadiansFromStream(struct FVector& ConeDir, float& ConeHalfAngleInRadians, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInRadians (Underlying native function: RandomUnitVectorInConeInRadians 0x9e1063c)
	static struct FVector RandomUnitVectorInConeInRadians(struct FVector& ConeDir, float& ConeHalfAngleInRadians); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInDegreesFromStream (Underlying native function: RandomUnitVectorInConeInDegreesFromStream 0x9e100e4)
	static struct FVector RandomUnitVectorInConeInDegreesFromStream(struct FVector& ConeDir, float& ConeHalfAngleInDegrees, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorInConeInDegrees (Underlying native function: RandomUnitVectorInConeInDegrees 0x9e0ffe8)
	static struct FVector RandomUnitVectorInConeInDegrees(struct FVector& ConeDir, float& ConeHalfAngleInDegrees); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVectorFromStream (Underlying native function: RandomUnitVectorFromStream 0x9e0ff48)
	static struct FVector RandomUnitVectorFromStream(struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomUnitVector (Underlying native function: RandomUnitVector 0x295b0c4)
	static struct FVector RandomUnitVector(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomRotatorFromStream (Underlying native function: RandomRotatorFromStream 0x9e0fe68)
	static struct FRotator RandomRotatorFromStream(bool& bRoll, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomRotator (Underlying native function: RandomRotator 0x9e0fdd4)
	static struct FRotator RandomRotator(bool& bRoll); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBoxFromStream_Box (Underlying native function: RandomPointInBoundingBoxFromStream_Box 0x9e0fb84)
	static struct FVector RandomPointInBoundingBoxFromStreamBox(struct FBox& Box, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBoxFromStream (Underlying native function: RandomPointInBoundingBoxFromStream 0x9e0fa38)
	static struct FVector RandomPointInBoundingBoxFromStream(struct FVector& Center, struct FVector& HalfSize, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBox_Box (Underlying native function: RandomPointInBoundingBox_Box 0x9e0fd14)
	static struct FVector RandomPointInBoundingBoxBox(struct FBox& Box); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomPointInBoundingBox (Underlying native function: RandomPointInBoundingBox 0x9e0f904)
	static struct FVector RandomPointInBoundingBox(struct FVector& Center, struct FVector& HalfSize); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomIntegerInRangeFromStream (Underlying native function: RandomIntegerInRangeFromStream 0x9e0f7c4)
	static int RandomIntegerInRangeFromStream(int& min, int& max, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomIntegerInRange (Underlying native function: RandomIntegerInRange 0x2369a30)
	static int RandomIntegerInRange(int& min, int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomIntegerFromStream (Underlying native function: RandomIntegerFromStream 0x9e0f6bc)
	static int RandomIntegerFromStream(int& max, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomInteger64InRange (Underlying native function: RandomInteger64InRange 0x9e0f508)
	static int64_t RandomInteger64InRange(int64_t& min, int64_t& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomInteger64 (Underlying native function: RandomInteger64 0x9e0f444)
	static int64_t RandomInteger64(int64_t& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomInteger (Underlying native function: RandomInteger 0x9e0f614)
	static int RandomInteger(int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomFloatInRangeFromStream (Underlying native function: RandomFloatInRangeFromStream 0x9e0f310)
	static float RandomFloatInRangeFromStream(float& min, float& max, struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomFloatInRange (Underlying native function: RandomFloatInRange 0x21620fc)
	static double RandomFloatInRange(double& min, double& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomFloatFromStream (Underlying native function: RandomFloatFromStream 0x9e0f260)
	static float RandomFloatFromStream(struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomFloat (Underlying native function: RandomFloat 0x2da7d2c)
	static double RandomFloat(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomBoolWithWeightFromStream (Underlying native function: RandomBoolWithWeightFromStream 0x9e0f18c)
	static bool RandomBoolWithWeightFromStream(float& Weight, struct FRandomStream*& RandomStream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomBoolWithWeight (Underlying native function: RandomBoolWithWeight 0x9e0f108)
	static bool RandomBoolWithWeight(float& Weight); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomBoolFromStream (Underlying native function: RandomBoolFromStream 0x9e0f04c)
	static bool RandomBoolFromStream(struct FRandomStream*& Stream); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RandomBool (Underlying native function: RandomBool 0x9e0effc)
	static bool RandomBool(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.RadiansToDegrees (Underlying native function: RadiansToDegrees 0x9e0ef74)
	static double RadiansToDegrees(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.QuaternionSpringInterp (Underlying native function: QuaternionSpringInterp 0x9e0e46c)
	static struct FQuat QuaternionSpringInterp(struct FQuat& Current, struct FQuat& Target, struct FQuaternionSpringState& SpringState, float& Stiffness, float& CriticalDampingFactor, float& DeltaTime, float& Mass, float& TargetVelocityAmount, bool& bInitializeFromTarget); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Quat_VectorUp (Underlying native function: Quat_VectorUp 0x9e0d100)
	static struct FVector QuatVectorUp(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_VectorRight (Underlying native function: Quat_VectorRight 0x9e0d01c)
	static struct FVector QuatVectorRight(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_VectorForward (Underlying native function: Quat_VectorForward 0x9e0cf38)
	static struct FVector QuatVectorForward(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_UnrotateVector (Underlying native function: Quat_UnrotateVector 0x9e0e24c)
	static struct FVector QuatUnrotateVector(struct FQuat& Q, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_SizeSquared (Underlying native function: Quat_SizeSquared 0x9e0e194)
	static float QuatSizeSquared(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Size (Underlying native function: Quat_Size 0x9e0e0d8)
	static float QuatSize(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_SetFromEuler (Underlying native function: Quat_SetFromEuler 0x9e0dff0)
	static void QuatSetFromEuler(struct FQuat& Q, struct FVector& Euler); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Quat_SetComponents (Underlying native function: Quat_SetComponents 0x9e0de5c)
	static void QuatSetComponents(struct FQuat& Q, float& X, float& Y, float& Z, float& W); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Quat_Rotator (Underlying native function: Quat_Rotator 0x9e0ddc0)
	static struct FRotator QuatRotator(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_RotateVector (Underlying native function: Quat_RotateVector 0x9e0dbe4)
	static struct FVector QuatRotateVector(struct FQuat& Q, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Normalized (Underlying native function: Quat_Normalized 0x9e0da80)
	static struct FQuat QuatNormalized(struct FQuat& Q, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Normalize (Underlying native function: Quat_Normalize 0x9e0d91c)
	static void QuatNormalize(struct FQuat& Q, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Quat_MakeFromEuler (Underlying native function: Quat_MakeFromEuler 0x9e0d880)
	static struct FQuat QuatMakeFromEuler(struct FVector& Euler); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Log (Underlying native function: Quat_Log 0x9e0d7e4)
	static struct FQuat QuatLog(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_IsNormalized (Underlying native function: Quat_IsNormalized 0x9e0d6e4)
	static bool QuatIsNormalized(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_IsNonFinite (Underlying native function: Quat_IsNonFinite 0x9e0d618)
	static bool QuatIsNonFinite(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_IsIdentity (Underlying native function: Quat_IsIdentity 0x9e0d4a4)
	static bool QuatIsIdentity(struct FQuat& Q, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_IsFinite (Underlying native function: Quat_IsFinite 0x9e0d3d8)
	static bool QuatIsFinite(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Inversed (Underlying native function: Quat_Inversed 0x9e0d33c)
	static struct FQuat QuatInversed(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Identity (Underlying native function: Quat_Identity 0x9e0d314)
	static struct FQuat QuatIdentity(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_GetRotationAxis (Underlying native function: Quat_GetRotationAxis 0x9e0d1e4)
	static struct FVector QuatGetRotationAxis(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_GetAxisZ (Underlying native function: Quat_GetAxisZ 0x9e0d100)
	static struct FVector QuatGetAxisZ(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_GetAxisY (Underlying native function: Quat_GetAxisY 0x9e0d01c)
	static struct FVector QuatGetAxisY(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_GetAxisX (Underlying native function: Quat_GetAxisX 0x9e0cf38)
	static struct FVector QuatGetAxisX(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_GetAngle (Underlying native function: Quat_GetAngle 0x9e0ce88)
	static float QuatGetAngle(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Exp (Underlying native function: Quat_Exp 0x9e0cdec)
	static struct FQuat QuatExp(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_Euler (Underlying native function: Quat_Euler 0x9e0cd50)
	static struct FVector QuatEuler(struct FQuat& Q); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Quat_EnforceShortestArcWith (Underlying native function: Quat_EnforceShortestArcWith 0x9e0cc1c)
	static void QuatEnforceShortestArcWith(struct FQuat& A, struct FQuat& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Quat_AngularDistance (Underlying native function: Quat_AngularDistance 0x9e0cad4)
	static float QuatAngularDistance(struct FQuat& A, struct FQuat& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ProjectVectorOnToVector (Underlying native function: ProjectVectorOnToVector 0x9e0c9d4)
	static struct FVector ProjectVectorOnToVector(struct FVector& V, struct FVector& Target); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ProjectVectorOnToPlane (Underlying native function: ProjectVectorOnToPlane 0x2736258)
	static struct FVector ProjectVectorOnToPlane(struct FVector& V, struct FVector& PlaneNormal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ProjectPointOnToPlane (Underlying native function: ProjectPointOnToPlane 0x9e0c888)
	static struct FVector ProjectPointOnToPlane(struct FVector& Point, struct FVector& PlaneBase, struct FVector& PlaneNormal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.PointsAreCoplanar (Underlying native function: PointsAreCoplanar 0x9e0c2d0)
	static bool PointsAreCoplanar(struct TArray<struct FVector>& Points, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.PerlinNoise1D (Underlying native function: PerlinNoise1D 0x2d086cc)
	static float PerlinNoise1D(float& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Percent_IntInt (Underlying native function: Percent_IntInt 0xef50f4)
	static int PercentIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Percent_Int64Int64 (Underlying native function: Percent_Int64Int64 0x9e0b740)
	static int64_t PercentInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Percent_FloatFloat (Underlying native function: Percent_FloatFloat 0x9e0b5f8)
	static double PercentFloatFloat(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Percent_ByteByte (Underlying native function: Percent_ByteByte 0x9e0b518)
	static unsigned char PercentByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Or_IntInt (Underlying native function: Or_IntInt 0x9e0a6cc)
	static int OrIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Or_Int64Int64 (Underlying native function: Or_Int64Int64 0x9e0a60c)
	static int64_t OrInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Now (Underlying native function: Now 0x2d92774)
	static struct FDateTime* Now(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqualExactly_VectorVector (Underlying native function: NotEqualExactly_VectorVector 0x9e09648)
	static bool NotEqualExactlyVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqualExactly_Vector4Vector4 (Underlying native function: NotEqualExactly_Vector4Vector4 0x9e09514)
	static bool NotEqualExactlyVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqualExactly_Vector2DVector2D (Underlying native function: NotEqualExactly_Vector2DVector2D 0x9e09448)
	static bool NotEqualExactlyVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_VectorVector (Underlying native function: NotEqual_VectorVector 0x2686a8c)
	static bool NotEqualVectorVector(struct FVector& A, struct FVector& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_Vector4Vector4 (Underlying native function: NotEqual_Vector4Vector4 0x9e0a36c)
	static bool NotEqualVector4Vector4(struct FVector4& A, struct FVector4& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_Vector2DVector2D (Underlying native function: NotEqual_Vector2DVector2D 0x9e0a23c)
	static bool NotEqualVector2DVector2D(struct FVector2D& A, struct FVector2D& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_TimespanTimespan (Underlying native function: NotEqual_TimespanTimespan 0x9e097e4)
	static bool NotEqualTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_RotatorRotator (Underlying native function: NotEqual_RotatorRotator 0x9e09e80)
	static bool NotEqualRotatorRotator(struct FRotator& A, struct FRotator& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_QuatQuat (Underlying native function: NotEqual_QuatQuat 0x9e09cc8)
	static bool NotEqualQuatQuat(struct FQuat& A, struct FQuat& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_ObjectObject (Underlying native function: NotEqual_ObjectObject 0x22dac4c)
	static bool NotEqualObjectObject(class UObject*& A, class UObject*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_NameName (Underlying native function: NotEqual_NameName 0x2392aac)
	static bool NotEqualNameName(struct FName& A, struct FName& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_MatrixMatrix (Underlying native function: NotEqual_MatrixMatrix 0x9e09b68)
	static bool NotEqualMatrixMatrix(struct FMatrix& A, struct FMatrix& B, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_LinearColorLinearColor (Underlying native function: NotEqual_LinearColorLinearColor 0x9e09a78)
	static bool NotEqualLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_IntPointIntPoint (Underlying native function: NotEqual_IntPointIntPoint 0x9e099ac)
	static bool NotEqualIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_IntInt (Underlying native function: NotEqual_IntInt 0x215c824)
	static bool NotEqualIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_Int64Int64 (Underlying native function: NotEqual_Int64Int64 0x6a7c6b4)
	static bool NotEqualInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_DoubleDouble (Underlying native function: NotEqual_DoubleDouble 0x1f4e3d0)
	static bool NotEqualDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_DateTimeDateTime (Underlying native function: NotEqual_DateTimeDateTime 0x9e097e4)
	static bool NotEqualDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_ClassClass (Underlying native function: NotEqual_ClassClass 0x9e09724)
	static bool NotEqualClassClass(class UClass*& A, class UClass*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_ByteByte (Underlying native function: NotEqual_ByteByte 0xef2b68)
	static bool NotEqualByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NotEqual_BoolBool (Underlying native function: NotEqual_BoolBool 0x20d4250)
	static bool NotEqualBoolBool(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Not_PreBool (Underlying native function: Not_PreBool 0x1e33134)
	static bool NotPreBool(bool& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Not_Int64 (Underlying native function: Not_Int64 0x9e0a510)
	static int64_t NotInt64(int64_t& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Not_Int (Underlying native function: Not_Int 0x9e0a590)
	static int NotInt(int& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NormalSafe2D (Underlying native function: NormalSafe2D 0x9e08ee0)
	static struct FVector2D NormalSafe2D(struct FVector2D& A, float& Tolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NormalizeToRange (Underlying native function: NormalizeToRange 0x23adb40)
	static double NormalizeToRange(double& Value, double& RangeMin, double& RangeMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NormalizedDeltaRotator (Underlying native function: NormalizedDeltaRotator 0x9e09348)
	static struct FRotator NormalizedDeltaRotator(struct FRotator& A, struct FRotator& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NormalizeAxis (Underlying native function: NormalizeAxis 0x9e09120)
	static float NormalizeAxis(float& Angle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Normalize2D (Underlying native function: Normalize2D 0x9e08ffc)
	static void Normalize2D(struct FVector2D& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Normal2D (Underlying native function: Normal2D 0x9e08e10)
	static struct FVector2D Normal2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Normal (Underlying native function: Normal 0x2870760)
	static struct FVector Normal(struct FVector& A, float& Tolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NegateVector (Underlying native function: NegateVector 0x9e08cc4)
	static struct FVector NegateVector(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NegateRotator (Underlying native function: NegateRotator 0x2a88db8)
	static struct FRotator NegateRotator(struct FRotator& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Negated2D (Underlying native function: Negated2D 0x9e08d54)
	static struct FVector2D Negated2D(struct FVector2D& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NearlyEqual_TransformTransform (Underlying native function: NearlyEqual_TransformTransform 0x9e08a60)
	static bool NearlyEqualTransformTransform(struct FTransform& A, struct FTransform& B, float& LocationTolerance, float& RotationTolerance, float& Scale3DTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.NearlyEqual_FloatFloat (Underlying native function: NearlyEqual_FloatFloat 0x205d144)
	static bool NearlyEqualFloatFloat(double& A, double& B, double& ErrorTolerance); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MultiplyMultiply_FloatFloat (Underlying native function: MultiplyMultiply_FloatFloat 0x25483f4)
	static double MultiplyMultiplyFloatFloat(double& Base, double& exp); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MultiplyByPi (Underlying native function: MultiplyByPi 0x2205898)
	static double MultiplyByPi(double& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_VectorVector (Underlying native function: Multiply_VectorVector 0x22fc2f4)
	static struct FVector MultiplyVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_VectorInt (Underlying native function: Multiply_VectorInt 0x9e085e4)
	static struct FVector MultiplyVectorInt(struct FVector& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_VectorFloat (Underlying native function: Multiply_VectorFloat 0x1f4ccb4)
	static struct FVector MultiplyVectorFloat(struct FVector& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_Vector4Vector4 (Underlying native function: Multiply_Vector4Vector4 0x9e0892c)
	static struct FVector4 MultiplyVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_Vector2DVector2D (Underlying native function: Multiply_Vector2DVector2D 0x9e08864)
	static struct FVector2D MultiplyVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_Vector2DFloat (Underlying native function: Multiply_Vector2DFloat 0x9e08790)
	static struct FVector2D MultiplyVector2DFloat(struct FVector2D& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_TimespanFloat (Underlying native function: Multiply_TimespanFloat 0x9e086bc)
	static struct FTimespan* MultiplyTimespanFloat(struct FTimespan*& A, float& Scalar); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_RotatorInt (Underlying native function: Multiply_RotatorInt 0x9e085e4)
	static struct FRotator MultiplyRotatorInt(struct FRotator& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_RotatorFloat (Underlying native function: Multiply_RotatorFloat 0x9e0850c)
	static struct FRotator MultiplyRotatorFloat(struct FRotator& A, float& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_QuatQuat (Underlying native function: Multiply_QuatQuat 0x9e08344)
	static struct FQuat MultiplyQuatQuat(struct FQuat& A, struct FQuat& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_MatrixMatrix (Underlying native function: Multiply_MatrixMatrix 0x9e081f0)
	static struct FMatrix MultiplyMatrixMatrix(struct FMatrix& A, struct FMatrix& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_MatrixFloat (Underlying native function: Multiply_MatrixFloat 0x9e08088)
	static struct FMatrix MultiplyMatrixFloat(struct FMatrix& A, double& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_LinearColorLinearColor (Underlying native function: Multiply_LinearColorLinearColor 0x9e07f88)
	static struct FLinearColor MultiplyLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_LinearColorFloat (Underlying native function: Multiply_LinearColorFloat 0x9e07e94)
	static struct FLinearColor MultiplyLinearColorFloat(struct FLinearColor& A, float& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_IntPointIntPoint (Underlying native function: Multiply_IntPointIntPoint 0x9e07db8)
	static struct FIntPoint* MultiplyIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_IntPointInt (Underlying native function: Multiply_IntPointInt 0x9e07cdc)
	static struct FIntPoint* MultiplyIntPointInt(struct FIntPoint*& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_IntInt (Underlying native function: Multiply_IntInt 0x2922574)
	static int MultiplyIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_IntFloat (Underlying native function: Multiply_IntFloat 0x9e07c14)
	static double MultiplyIntFloat(int& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_Int64Int64 (Underlying native function: Multiply_Int64Int64 0x9e07b54)
	static int64_t MultiplyInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_DoubleDouble (Underlying native function: Multiply_DoubleDouble 0xef35cc)
	static double MultiplyDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Multiply_ByteByte (Underlying native function: Multiply_ByteByte 0x9e07a94)
	static unsigned char MultiplyByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MirrorVectorByNormal (Underlying native function: MirrorVectorByNormal 0x9df5338)
	static struct FVector MirrorVectorByNormal(struct FVector& InVect, struct FVector& InNormal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MinOfIntArray (Underlying native function: MinOfIntArray 0x9e0712c)
	static void MinOfIntArray(struct TArray<int>& IntArray, int& IndexOfMinValue, int& MinValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MinOfFloatArray (Underlying native function: MinOfFloatArray 0x9e06f90)
	static void MinOfFloatArray(struct TArray<float>& FloatArray, int& IndexOfMinValue, float& MinValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MinOfByteArray (Underlying native function: MinOfByteArray 0x9e06e04)
	static void MinOfByteArray(struct TArray<unsigned char>& ByteArray, int& IndexOfMinValue, unsigned char& MinValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MinInt64 (Underlying native function: MinInt64 0x9e06d40)
	static int64_t MinInt64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MinimumAreaRectangle (Underlying native function: MinimumAreaRectangle 0x9e072b8)
	static void MinimumAreaRectangle(class UObject*& WorldContextObject, struct TArray<struct FVector>& InVerts, struct FVector& SampleSurfaceNormal, struct FVector& OutRectCenter, struct FRotator& OutRectRotation, float& OutSideLengthX, float& OutSideLengthY, bool& bDebugDraw); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.MinAreaRectangle (Underlying native function: MinAreaRectangle 0x9e06a90)
	static void MinAreaRectangle(class UObject*& WorldContextObject, struct TArray<struct FVector>& InPoints, struct FVector& SampleSurfaceNormal, struct FVector& OutRectCenter, struct FRotator& OutRectRotation, float& OutRectLengthX, float& OutRectLengthY, bool& bDebugDraw); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.min (Underlying native function: min 0x27c06b0)
	static int min(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MedianOfIntArray (Underlying native function: MedianOfIntArray 0x9e0699c)
	static void MedianOfIntArray(struct TArray<int>& IntArray, float& MedianValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MaxOfIntArray (Underlying native function: MaxOfIntArray 0x9e06810)
	static void MaxOfIntArray(struct TArray<int>& IntArray, int& IndexOfMaxValue, int& MaxValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MaxOfFloatArray (Underlying native function: MaxOfFloatArray 0x9e06674)
	static void MaxOfFloatArray(struct TArray<float>& FloatArray, int& IndexOfMaxValue, float& MaxValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MaxOfByteArray (Underlying native function: MaxOfByteArray 0x9e064e8)
	static void MaxOfByteArray(struct TArray<unsigned char>& ByteArray, int& IndexOfMaxValue, unsigned char& MaxValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MaxInt64 (Underlying native function: MaxInt64 0x9e06424)
	static int64_t MaxInt64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.max (Underlying native function: max 0x27bec1c)
	static int max(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_TransformVector4 (Underlying native function: Matrix_TransformVector4 0x9e0610c)
	static struct FVector4 MatrixTransformVector4(struct FMatrix& M, struct FVector4& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_TransformVector (Underlying native function: Matrix_TransformVector 0x9e062a0)
	static struct FVector4 MatrixTransformVector(struct FMatrix& M, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_TransformPosition (Underlying native function: Matrix_TransformPosition 0x9e05f7c)
	static struct FVector4 MatrixTransformPosition(struct FMatrix& M, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_ToQuat (Underlying native function: Matrix_ToQuat 0x9e05eb8)
	static struct FQuat MatrixToQuat(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_SetOrigin (Underlying native function: Matrix_SetOrigin 0x9e05dac)
	static void MatrixSetOrigin(struct FMatrix& M, struct FVector& NewOrigin); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Matrix_SetColumn (Underlying native function: Matrix_SetColumn 0x9e05c64)
	static void MatrixSetColumn(struct FMatrix& M, struct TEnumAsByte<EMatrixColumns>& Column, struct FVector& Value); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Matrix_SetAxis (Underlying native function: Matrix_SetAxis 0x9e05b18)
	static void MatrixSetAxis(struct FMatrix& M, struct TEnumAsByte<EAxis>& Axis, struct FVector& AxisVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Matrix_ScaleTranslation (Underlying native function: Matrix_ScaleTranslation 0x9e059a0)
	static struct FMatrix MatrixScaleTranslation(struct FMatrix& M, struct FVector& Scale3D); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_RemoveTranslation (Underlying native function: Matrix_RemoveTranslation 0x9e05874)
	static struct FMatrix MatrixRemoveTranslation(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_RemoveScaling (Underlying native function: Matrix_RemoveScaling 0x9e05778)
	static void MatrixRemoveScaling(struct FMatrix& M, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.Matrix_Mirror (Underlying native function: Matrix_Mirror 0x9e055ac)
	static struct FMatrix MatrixMirror(struct FMatrix& M, struct TEnumAsByte<EAxis>& MirrorAxis, struct TEnumAsByte<EAxis>& FlipAxis); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_InverseTransformVector (Underlying native function: Matrix_InverseTransformVector 0x9e05404)
	static struct FVector MatrixInverseTransformVector(struct FMatrix& M, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_InverseTransformPosition (Underlying native function: Matrix_InverseTransformPosition 0x9e05250)
	static struct FVector MatrixInverseTransformPosition(struct FMatrix& M, struct FVector& V); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_Identity (Underlying native function: Matrix_Identity 0x9e051e0)
	static struct FMatrix MatrixIdentity(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetUnitAxis (Underlying native function: Matrix_GetUnitAxis 0x9e050d4)
	static struct FVector MatrixGetUnitAxis(struct FMatrix& M, struct TEnumAsByte<EAxis>& Axis); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetUnitAxes (Underlying native function: Matrix_GetUnitAxes 0x9e04f38)
	static void MatrixGetUnitAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetTransposed (Underlying native function: Matrix_GetTransposed 0x9e04de8)
	static struct FMatrix MatrixGetTransposed(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetTransposeAdjoint (Underlying native function: Matrix_GetTransposeAdjoint 0x9e04cfc)
	static struct FMatrix MatrixGetTransposeAdjoint(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetScaleVector (Underlying native function: Matrix_GetScaleVector 0x9e0490c)
	static struct FVector MatrixGetScaleVector(struct FMatrix& M, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetScaledAxis (Underlying native function: Matrix_GetScaledAxis 0x9e04bf0)
	static struct FVector MatrixGetScaledAxis(struct FMatrix& M, struct TEnumAsByte<EAxis>& Axis); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetScaledAxes (Underlying native function: Matrix_GetScaledAxes 0x9e04a1c)
	static void MatrixGetScaledAxes(struct FMatrix& M, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetRotDeterminant (Underlying native function: Matrix_GetRotDeterminant 0x9e04854)
	static float MatrixGetRotDeterminant(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetRotator (Underlying native function: Matrix_GetRotator 0x9de5c48)
	static struct FRotator MatrixGetRotator(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetOrigin (Underlying native function: Matrix_GetOrigin 0x9e0479c)
	static struct FVector MatrixGetOrigin(struct FMatrix& InMatrix); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetMaximumAxisScale (Underlying native function: Matrix_GetMaximumAxisScale 0x9e046e4)
	static float MatrixGetMaximumAxisScale(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetMatrixWithoutScale (Underlying native function: Matrix_GetMatrixWithoutScale 0x9e04554)
	static struct FMatrix MatrixGetMatrixWithoutScale(struct FMatrix& M, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetInverse (Underlying native function: Matrix_GetInverse 0x9e04468)
	static struct FMatrix MatrixGetInverse(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumTopPlane (Underlying native function: Matrix_GetFrustumTopPlane 0x9e042a0)
	static bool MatrixGetFrustumTopPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumRightPlane (Underlying native function: Matrix_GetFrustumRightPlane 0x9e040d8)
	static bool MatrixGetFrustumRightPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumNearPlane (Underlying native function: Matrix_GetFrustumNearPlane 0x9e03f10)
	static bool MatrixGetFrustumNearPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumLeftPlane (Underlying native function: Matrix_GetFrustumLeftPlane 0x9e03d48)
	static bool MatrixGetFrustumLeftPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumFarPlane (Underlying native function: Matrix_GetFrustumFarPlane 0x9e03bc0)
	static bool MatrixGetFrustumFarPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetFrustumBottomPlane (Underlying native function: Matrix_GetFrustumBottomPlane 0x9e039f8)
	static bool MatrixGetFrustumBottomPlane(struct FMatrix& M, struct FPlane& OutPlane); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetDeterminant (Underlying native function: Matrix_GetDeterminant 0x9e03940)
	static float MatrixGetDeterminant(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_GetColumn (Underlying native function: Matrix_GetColumn 0x9e03838)
	static struct FVector MatrixGetColumn(struct FMatrix& M, struct TEnumAsByte<EMatrixColumns>& Column); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_ContainsNaN (Underlying native function: Matrix_ContainsNaN 0x9e03788)
	static bool MatrixContainsNaN(struct FMatrix& M); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_ConcatenateTranslation (Underlying native function: Matrix_ConcatenateTranslation 0x9e0362c)
	static struct FMatrix MatrixConcatenateTranslation(struct FMatrix& M, struct FVector& Translation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Matrix_ApplyScale (Underlying native function: Matrix_ApplyScale 0x9e034dc)
	static struct FMatrix MatrixApplyScale(struct FMatrix& M, float& Scale); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MapRangeUnclamped (Underlying native function: MapRangeUnclamped 0x9e02fa0)
	static double MapRangeUnclamped(double& Value, double& InRangeA, double& InRangeB, double& OutRangeA, double& OutRangeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MapRangeClamped (Underlying native function: MapRangeClamped 0xef33e0)
	static double MapRangeClamped(double& Value, double& InRangeA, double& InRangeB, double& OutRangeA, double& OutRangeB); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector_NetQuantizeNormal (Underlying native function: MakeVector_NetQuantizeNormal 0x9e02e84)
	static struct FVector_NetQuantizeNormal MakeVectorNetQuantizeNormal(double& X, double& Y, double& Z); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector_NetQuantize100 (Underlying native function: MakeVector_NetQuantize100 0x9e02e84)
	static struct FVector_NetQuantize100 MakeVectorNetQuantize100(double& X, double& Y, double& Z); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector_NetQuantize10 (Underlying native function: MakeVector_NetQuantize10 0x9e02e84)
	static struct FVector_NetQuantize10 MakeVectorNetQuantize10(double& X, double& Y, double& Z); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector_NetQuantize (Underlying native function: MakeVector_NetQuantize 0x9e02e84)
	static struct FVector_NetQuantize MakeVectorNetQuantize(double& X, double& Y, double& Z); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector4 (Underlying native function: MakeVector4 0x222400c)
	static struct FVector4 MakeVector4(double& X, double& Y, double& Z, double& W); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector2D (Underlying native function: MakeVector2D 0x24ef0d4)
	static struct FVector2D MakeVector2D(double& X, double& Y); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeVector (Underlying native function: MakeVector 0x20a9a38)
	static struct FVector MakeVector(double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeTransform (Underlying native function: MakeTransform 0x237d7c4)
	static struct FTransform MakeTransform(struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeTimespan2 (Underlying native function: MakeTimespan2 0x9e02b24)
	static struct FTimespan* MakeTimespan2(int& Days, int& Hours, int& Minutes, int& Seconds, int& FractionNano); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeTimespan (Underlying native function: MakeTimespan 0x9e02cd0)
	static struct FTimespan* MakeTimespan(int& Days, int& Hours, int& Minutes, int& Seconds, int& Milliseconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromZY (Underlying native function: MakeRotFromZY 0x9e01f58)
	static struct FRotator MakeRotFromZY(struct FVector& Z, struct FVector& Y); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromZX (Underlying native function: MakeRotFromZX 0x234d780)
	static struct FRotator MakeRotFromZX(struct FVector& Z, struct FVector& X); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromZ (Underlying native function: MakeRotFromZ 0x12c1c54)
	static struct FRotator MakeRotFromZ(struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromYZ (Underlying native function: MakeRotFromYZ 0x9e01e3c)
	static struct FRotator MakeRotFromYZ(struct FVector& Y, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromYX (Underlying native function: MakeRotFromYX 0x9e01d20)
	static struct FRotator MakeRotFromYX(struct FVector& Y, struct FVector& X); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromY (Underlying native function: MakeRotFromY 0x9e01c4c)
	static struct FRotator MakeRotFromY(struct FVector& Y); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromXZ (Underlying native function: MakeRotFromXZ 0x9e01b30)
	static struct FRotator MakeRotFromXZ(struct FVector& X, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromXY (Underlying native function: MakeRotFromXY 0x9e01a14)
	static struct FRotator MakeRotFromXY(struct FVector& X, struct FVector& Y); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotFromX (Underlying native function: MakeRotFromX 0x277c830)
	static struct FRotator MakeRotFromX(struct FVector& X); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotator (Underlying native function: MakeRotator 0x218ace4)
	static struct FRotator MakeRotator(float& Roll, float& Pitch, float& Yaw); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRotationFromAxes (Underlying native function: MakeRotationFromAxes 0x9e02074)
	static struct FRotator MakeRotationFromAxes(struct FVector& Forward, struct FVector& Right, struct FVector& Up); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRelativeTransform (Underlying native function: MakeRelativeTransform 0x9e01850)
	static struct FTransform MakeRelativeTransform(struct FTransform& A, struct FTransform& RelativeTo); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeRandomStream (Underlying native function: MakeRandomStream 0x9e017c8)
	static struct FRandomStream* MakeRandomStream(int& InitialSeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeQuat (Underlying native function: MakeQuat 0x9e01678)
	static struct FQuat MakeQuat(float& X, float& Y, float& Z, float& W); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeQualifiedFrameTime (Underlying native function: MakeQualifiedFrameTime 0x9e01538)
	static struct FQualifiedFrameTime MakeQualifiedFrameTime(struct FFrameNumber& Frame, struct FFrameRate*& FrameRate, float& SubFrame); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakePulsatingValue (Underlying native function: MakePulsatingValue 0x9e01410)
	static float MakePulsatingValue(float& InCurrentTime, float& InPulsesPerSecond, float& InPhase); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakePlaneFromPointAndNormal (Underlying native function: MakePlaneFromPointAndNormal 0x9e01314)
	static struct FPlane MakePlaneFromPointAndNormal(struct FVector& Point, struct FVector& Normal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeFrameRate (Underlying native function: MakeFrameRate 0x9e00f70)
	static struct FFrameRate* MakeFrameRate(int& Numerator, int& Denominator); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeDateTime (Underlying native function: MakeDateTime 0x9e00d68)
	static struct FDateTime* MakeDateTime(int& Year, int& Month, int& Day, int& Hour, int& Minute, int& Second, int& Millisecond); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeColor (Underlying native function: MakeColor 0x23e53f8)
	static struct FLinearColor MakeColor(float& R, float& G, float& B, float& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeBoxSphereBounds (Underlying native function: MakeBoxSphereBounds 0x9e00c24)
	static struct FBoxSphereBounds MakeBoxSphereBounds(struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeBox2D (Underlying native function: MakeBox2D 0x9e00a5c)
	static struct FBox2D MakeBox2D(struct FVector2D& min, struct FVector2D& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.MakeBox (Underlying native function: MakeBox 0x9e00b28)
	static struct FBox MakeBox(struct FVector& min, struct FVector& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Loge (Underlying native function: Loge 0x9e00540)
	static double Loge(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.log (Underlying native function: log 0x9e0046c)
	static double log(double& A, double& Base); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinePlaneIntersection_OriginNormal (Underlying native function: LinePlaneIntersection_OriginNormal 0x9dfe17c)
	static bool LinePlaneIntersectionOriginNormal(struct FVector& LineStart, struct FVector& LineEnd, struct FVector& PlaneOrigin, struct FVector& PlaneNormal, float& T, struct FVector& Intersection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinePlaneIntersection (Underlying native function: LinePlaneIntersection 0x9dfdf98)
	static bool LinePlaneIntersection(struct FVector& LineStart, struct FVector& LineEnd, struct FPlane& APlane, float& T, struct FVector& Intersection); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColorLerpUsingHSV (Underlying native function: LinearColorLerpUsingHSV 0x9dfef54)
	static struct FLinearColor LinearColorLerpUsingHSV(struct FLinearColor& A, struct FLinearColor& B, float& Alpha); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColorLerp (Underlying native function: LinearColorLerp 0x232c738)
	static struct FLinearColor LinearColorLerp(struct FLinearColor& A, struct FLinearColor& B, float& Alpha); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Yellow (Underlying native function: LinearColor_Yellow 0x9e00120)
	static struct FLinearColor LinearColorYellow(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_White (Underlying native function: LinearColor_White 0x2cdb42c)
	static struct FLinearColor LinearColorWhite(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Transparent (Underlying native function: LinearColor_Transparent 0x9e00104)
	static struct FLinearColor LinearColorTransparent(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_ToRGBE (Underlying native function: LinearColor_ToRGBE 0x9e00074)
	static struct FColor LinearColorToRGBE(struct FLinearColor& InLinearColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_ToNewOpacity (Underlying native function: LinearColor_ToNewOpacity 0x9dfff98)
	static struct FLinearColor LinearColorToNewOpacity(struct FLinearColor& InColor, float& InOpacity); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetTemperature (Underlying native function: LinearColor_SetTemperature 0x9dffec0)
	static void LinearColorSetTemperature(struct FLinearColor& InOutColor, float& InTemperature); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetRGBA (Underlying native function: LinearColor_SetRGBA 0x9dffcac)
	static void LinearColorSetRGBA(struct FLinearColor& InOutColor, float& R, float& G, float& B, float& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetRandomHue (Underlying native function: LinearColor_SetRandomHue 0x9dffe34)
	static void LinearColorSetRandomHue(struct FLinearColor& InOutColor); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromSRGB (Underlying native function: LinearColor_SetFromSRGB 0x9dffba0)
	static void LinearColorSetFromSRGB(struct FLinearColor& InOutColor, struct FColor& InSRGB); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromPow22 (Underlying native function: LinearColor_SetFromPow22 0x9dffa94)
	static void LinearColorSetFromPow22(struct FLinearColor& InOutColor, struct FColor& InColor); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_SetFromHSV (Underlying native function: LinearColor_SetFromHSV 0x9dff8f4)
	static void LinearColorSetFromHSV(struct FLinearColor& InOutColor, float& H, float& S, float& V, float& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Set (Underlying native function: LinearColor_Set 0x9dff814)
	static void LinearColorSet(struct FLinearColor& InOutColor, struct FLinearColor& InColor); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Red (Underlying native function: LinearColor_Red 0x9dff7f8)
	static struct FLinearColor LinearColorRed(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_QuantizeRound (Underlying native function: LinearColor_QuantizeRound 0x9dff6f0)
	static struct FColor LinearColorQuantizeRound(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Quantize (Underlying native function: LinearColor_Quantize 0x9dff600)
	static struct FColor LinearColorQuantize(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_IsNearEqual (Underlying native function: LinearColor_IsNearEqual 0x9dff4a8)
	static bool LinearColorIsNearEqual(struct FLinearColor& A, struct FLinearColor& B, float& Tolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Green (Underlying native function: LinearColor_Green 0x9dff48c)
	static struct FLinearColor LinearColorGreen(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Gray (Underlying native function: LinearColor_Gray 0x9dff470)
	static struct FLinearColor LinearColorGray(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_GetMin (Underlying native function: LinearColor_GetMin 0x9dff3d8)
	static float LinearColorGetMin(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_GetMax (Underlying native function: LinearColor_GetMax 0x9dff340)
	static float LinearColorGetMax(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_GetLuminance (Underlying native function: LinearColor_GetLuminance 0x9dff29c)
	static float LinearColorGetLuminance(struct FLinearColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Distance (Underlying native function: LinearColor_Distance 0x9dff18c)
	static float LinearColorDistance(struct FLinearColor& C1, struct FLinearColor& C2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Desaturated (Underlying native function: LinearColor_Desaturated 0x9dff0b0)
	static struct FLinearColor LinearColorDesaturated(struct FLinearColor& InColor, float& InDesaturation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Blue (Underlying native function: LinearColor_Blue 0x9dff094)
	static struct FLinearColor LinearColorBlue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LinearColor_Black (Underlying native function: LinearColor_Black 0x9dff078)
	static struct FLinearColor LinearColorBlack(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessLess_VectorRotator (Underlying native function: LessLess_VectorRotator 0x9dfddd8)
	static struct FVector LessLessVectorRotator(struct FVector& A, struct FRotator& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_TimespanTimespan (Underlying native function: LessEqual_TimespanTimespan 0x9dfdd18)
	static bool LessEqualTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_IntInt (Underlying native function: LessEqual_IntInt 0x1f71180)
	static bool LessEqualIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_Int64Int64 (Underlying native function: LessEqual_Int64Int64 0x6a7c5f4)
	static bool LessEqualInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_DoubleDouble (Underlying native function: LessEqual_DoubleDouble 0x20c6330)
	static bool LessEqualDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_DateTimeDateTime (Underlying native function: LessEqual_DateTimeDateTime 0x9dfdd18)
	static bool LessEqualDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.LessEqual_ByteByte (Underlying native function: LessEqual_ByteByte 0x9dfdc58)
	static bool LessEqualByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_TimespanTimespan (Underlying native function: Less_TimespanTimespan 0x9dfded8)
	static bool LessTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_IntInt (Underlying native function: Less_IntInt 0xef4448)
	static bool LessIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_Int64Int64 (Underlying native function: Less_Int64Int64 0x6a7c534)
	static bool LessInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_DoubleDouble (Underlying native function: Less_DoubleDouble 0x2079d8c)
	static bool LessDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_DateTimeDateTime (Underlying native function: Less_DateTimeDateTime 0x9dfded8)
	static bool LessDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Less_ByteByte (Underlying native function: Less_ByteByte 0x217e544)
	static bool LessByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Lerp (Underlying native function: Lerp 0x1ff3ed8)
	static double Lerp(double& A, double& B, double& Alpha); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsZero2D (Underlying native function: IsZero2D 0x9dfab3c)
	static bool IsZero2D(struct FVector2D& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsPointInBoxWithTransform_Box (Underlying native function: IsPointInBoxWithTransform_Box 0x9dfa45c)
	static bool IsPointInBoxWithTransformBox(struct FVector& Point, struct FTransform& BoxWorldTransform, struct FBox& BoxExtent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsPointInBoxWithTransform (Underlying native function: IsPointInBoxWithTransform 0x9dfa2bc)
	static bool IsPointInBoxWithTransform(struct FVector& Point, struct FTransform& BoxWorldTransform, struct FVector& BoxExtent); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsPointInBox_Box (Underlying native function: IsPointInBox_Box 0x9dfa610)
	static bool IsPointInBoxBox(struct FVector& Point, struct FBox& Box); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsPointInBox (Underlying native function: IsPointInBox 0x9dfa180)
	static bool IsPointInBox(struct FVector& Point, struct FVector& BoxOrigin, struct FVector& BoxExtent); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsNearlyZero2D (Underlying native function: IsNearlyZero2D 0x9df9f20)
	static bool IsNearlyZero2D(struct FVector2D& A, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsMorning (Underlying native function: IsMorning 0x9df9e68)
	static bool IsMorning(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsLeapYear (Underlying native function: IsLeapYear 0x9df9cec)
	static bool IsLeapYear(int& Year); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IsAfternoon (Underlying native function: IsAfternoon 0x9df99e0)
	static bool IsAfternoon(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InvertTransform (Underlying native function: InvertTransform 0x9df9684)
	static struct FTransform InvertTransform(struct FTransform& T); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InverseTransformRotation (Underlying native function: InverseTransformRotation 0x237d988)
	static struct FRotator InverseTransformRotation(struct FTransform& T, struct FRotator& Rotation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InverseTransformLocation (Underlying native function: InverseTransformLocation 0x9df9524)
	static struct FVector InverseTransformLocation(struct FTransform& T, struct FVector& Location); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InverseTransformDirection (Underlying native function: InverseTransformDirection 0x9df93c4)
	static struct FVector InverseTransformDirection(struct FTransform& T, struct FVector& Direction); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_Zero (Underlying native function: IntPoint_Zero 0x9d9b974)
	static struct FIntPoint* IntPointZero(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_Up (Underlying native function: IntPoint_Up 0x9df9328)
	static struct FIntPoint* IntPointUp(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_Right (Underlying native function: IntPoint_Right 0x9df930c)
	static struct FIntPoint* IntPointRight(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_One (Underlying native function: IntPoint_One 0x9df92f0)
	static struct FIntPoint* IntPointOne(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_Left (Underlying native function: IntPoint_Left 0x9df92d8)
	static struct FIntPoint* IntPointLeft(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.IntPoint_Down (Underlying native function: IntPoint_Down 0x9df92bc)
	static struct FIntPoint* IntPointDown(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InRange_IntInt (Underlying native function: InRange_IntInt 0x9df86fc)
	static bool InRangeIntInt(int& Value, int& min, int& max, bool& InclusiveMin, bool& InclusiveMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InRange_Int64Int64 (Underlying native function: InRange_Int64Int64 0x9df8564)
	static bool InRangeInt64Int64(int64_t& Value, int64_t& min, int64_t& max, bool& InclusiveMin, bool& InclusiveMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.InRange_FloatFloat (Underlying native function: InRange_FloatFloat 0x9df83d0)
	static bool InRangeFloatFloat(double& Value, double& min, double& max, bool& InclusiveMin, bool& InclusiveMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Hypotenuse (Underlying native function: Hypotenuse 0x9df8084)
	static double Hypotenuse(double& Width, double& Height); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.HSVToRGBLinear (Underlying native function: HSVToRGBLinear 0x9df7d54)
	static struct FLinearColor HSVToRGBLinear(struct FLinearColor& HSV); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.HSVToRGB_Vector (Underlying native function: HSVToRGB_Vector 0x9df7de4)
	static void HSVToRGBVector(struct FLinearColor& HSV, struct FLinearColor& RGB); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.HSVToRGB (Underlying native function: HSVToRGB 0x1af0a18)
	static struct FLinearColor HSVToRGB(float& H, float& S, float& V, float& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GridSnap_Float (Underlying native function: GridSnap_Float 0x9df7c28)
	static double GridSnapFloat(double& Location, double& GridSize); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterGreater_VectorRotator (Underlying native function: GreaterGreater_VectorRotator 0x9df79a8)
	static struct FVector GreaterGreaterVectorRotator(struct FVector& A, struct FRotator& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_TimespanTimespan (Underlying native function: GreaterEqual_TimespanTimespan 0x9df78e8)
	static bool GreaterEqualTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_IntInt (Underlying native function: GreaterEqual_IntInt 0x2026004)
	static bool GreaterEqualIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_Int64Int64 (Underlying native function: GreaterEqual_Int64Int64 0x6a7c474)
	static bool GreaterEqualInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_DoubleDouble (Underlying native function: GreaterEqual_DoubleDouble 0xef3344)
	static bool GreaterEqualDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_DateTimeDateTime (Underlying native function: GreaterEqual_DateTimeDateTime 0x9df78e8)
	static bool GreaterEqualDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GreaterEqual_ByteByte (Underlying native function: GreaterEqual_ByteByte 0x9df7828)
	static bool GreaterEqualByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_TimespanTimespan (Underlying native function: Greater_TimespanTimespan 0x9df7b68)
	static bool GreaterTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_IntInt (Underlying native function: Greater_IntInt 0xef392c)
	static bool GreaterIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_Int64Int64 (Underlying native function: Greater_Int64Int64 0x6a7c3b4)
	static bool GreaterInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_DoubleDouble (Underlying native function: Greater_DoubleDouble 0xef3530)
	static bool GreaterDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_DateTimeDateTime (Underlying native function: Greater_DateTimeDateTime 0x9df7b68)
	static bool GreaterDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Greater_ByteByte (Underlying native function: Greater_ByteByte 0x9df7aa8)
	static bool GreaterByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetYear (Underlying native function: GetYear 0x9df779c)
	static int GetYear(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetYawPitchFromVector (Underlying native function: GetYawPitchFromVector 0x9df7680)
	static void GetYawPitchFromVector(struct FVector& InVec, float& Yaw, float& Pitch); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetVectorArrayAverage (Underlying native function: GetVectorArrayAverage 0x9df71bc)
	static struct FVector GetVectorArrayAverage(struct TArray<struct FVector>& Vectors); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetUpVector (Underlying native function: GetUpVector 0x9df7018)
	static struct FVector GetUpVector(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTotalSeconds (Underlying native function: GetTotalSeconds 0x2dc9eb8)
	static float GetTotalSeconds(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTotalMinutes (Underlying native function: GetTotalMinutes 0x9df6e4c)
	static float GetTotalMinutes(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTotalMilliseconds (Underlying native function: GetTotalMilliseconds 0x9df6dc0)
	static float GetTotalMilliseconds(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTotalHours (Underlying native function: GetTotalHours 0x9df6d34)
	static float GetTotalHours(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTotalDays (Underlying native function: GetTotalDays 0x9df6ca8)
	static float GetTotalDays(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTimeOfDay (Underlying native function: GetTimeOfDay 0x9df6c1c)
	static struct FTimespan* GetTimeOfDay(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetTAU (Underlying native function: GetTAU 0x9df67b4)
	static double GetTAU(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetSlopeDegreeAngles (Underlying native function: GetSlopeDegreeAngles 0x9df578c)
	static void GetSlopeDegreeAngles(struct FVector& MyRightYAxis, struct FVector& FloorNormal, struct FVector& UpVector, float& OutSlopePitchDegreeAngle, float& OutSlopeRollDegreeAngle); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetSeconds (Underlying native function: GetSeconds 0x9df56cc)
	static int GetSeconds(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetSecond (Underlying native function: GetSecond 0x9df56cc)
	static int GetSecond(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetRotated2D (Underlying native function: GetRotated2D 0x9df55c8)
	static struct FVector2D GetRotated2D(struct FVector2D& A, float& AngleDeg); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetRightVector (Underlying native function: GetRightVector 0x9df551c)
	static struct FVector GetRightVector(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetReflectionVector (Underlying native function: GetReflectionVector 0x9df5338)
	static struct FVector GetReflectionVector(struct FVector& Direction, struct FVector& SurfaceNormal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetPointDistanceToSegment (Underlying native function: GetPointDistanceToSegment 0x9df4600)
	static float GetPointDistanceToSegment(struct FVector& Point, struct FVector& SegmentStart, struct FVector& SegmentEnd); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetPointDistanceToLine (Underlying native function: GetPointDistanceToLine 0x9df44c4)
	static float GetPointDistanceToLine(struct FVector& Point, struct FVector& LineOrigin, struct FVector& LineDirection); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetPI (Underlying native function: GetPI 0x9df4208)
	static double GetPI(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMonth (Underlying native function: GetMonth 0x9df3ed4)
	static int GetMonth(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMinutes (Underlying native function: GetMinutes 0x9df3dec)
	static int GetMinutes(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMinute (Underlying native function: GetMinute 0x9df3dec)
	static int GetMinute(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMinElement (Underlying native function: GetMinElement 0x9df3d28)
	static double GetMinElement(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMin2D (Underlying native function: GetMin2D 0x9df3ca8)
	static double GetMin2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMilliseconds (Underlying native function: GetMilliseconds 0x9df3bec)
	static int GetMilliseconds(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMillisecond (Underlying native function: GetMillisecond 0x9df3b30)
	static int GetMillisecond(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMaxElement (Underlying native function: GetMaxElement 0x9df38f8)
	static double GetMaxElement(struct FVector& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetMax2D (Underlying native function: GetMax2D 0x9df3878)
	static double GetMax2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetHours (Underlying native function: GetHours 0x9df343c)
	static int GetHours(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetHour12 (Underlying native function: GetHour12 0x9df33b4)
	static int GetHour12(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetHour (Underlying native function: GetHour 0x9df343c)
	static int GetHour(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetForwardVector (Underlying native function: GetForwardVector 0x2328718)
	static struct FVector GetForwardVector(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDuration (Underlying native function: GetDuration 0x9df2a80)
	static struct FTimespan* GetDuration(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDirectionUnitVector (Underlying native function: GetDirectionUnitVector 0x27a0248)
	static struct FVector GetDirectionUnitVector(struct FVector& From, struct FVector& To); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDays (Underlying native function: GetDays 0x9df2790)
	static int GetDays(struct FTimespan*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDayOfYear (Underlying native function: GetDayOfYear 0x9df2708)
	static int GetDayOfYear(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDay (Underlying native function: GetDay 0x9df267c)
	static int GetDay(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetDate (Underlying native function: GetDate 0x9df25ec)
	static struct FDateTime* GetDate(struct FDateTime*& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetAzimuthAndElevation (Underlying native function: GetAzimuthAndElevation 0x9df155c)
	static void GetAzimuthAndElevation(struct FVector& InDirection, struct FTransform& ReferenceFrame, float& Azimuth, float& Elevation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetAxes (Underlying native function: GetAxes 0x13191b0)
	static void GetAxes(struct FRotator& A, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetAbsMax2D (Underlying native function: GetAbsMax2D 0x9df10a0)
	static double GetAbsMax2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.GetAbs2D (Underlying native function: GetAbs2D 0x9df1024)
	static struct FVector2D GetAbs2D(struct FVector2D& A); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FWrap (Underlying native function: FWrap 0x9defb7c)
	static double FWrap(double& Value, double& min, double& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FTruncVector (Underlying native function: FTruncVector 0x9defae4)
	static struct FIntVector FTruncVector(struct FVector& InVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FTrunc64 (Underlying native function: FTrunc64 0x9defa64)
	static int64_t FTrunc64(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FTrunc (Underlying native function: FTrunc 0x22ce0d0)
	static int FTrunc(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FromSeconds (Underlying native function: FromSeconds 0x9df0f98)
	static struct FTimespan* FromSeconds(float& Seconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FromMinutes (Underlying native function: FromMinutes 0x9df0f0c)
	static struct FTimespan* FromMinutes(float& Minutes); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FromMilliseconds (Underlying native function: FromMilliseconds 0x9df0e80)
	static struct FTimespan* FromMilliseconds(float& Milliseconds); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FromHours (Underlying native function: FromHours 0x9df0df4)
	static struct FTimespan* FromHours(float& Hours); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FromDays (Underlying native function: FromDays 0x9df0d68)
	static struct FTimespan* FromDays(float& Days); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Fraction (Underlying native function: Fraction 0x24b0408)
	static double Fraction(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FMod64 (Underlying native function: FMod64 0x9def834)
	static int64_t FMod64(double& Dividend, double& Divisor, double& Remainder); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FMod (Underlying native function: FMod 0x9def94c)
	static int FMod(double& Dividend, double& Divisor, double& Remainder); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FMin (Underlying native function: FMin 0x22b5500)
	static double FMin(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FMax (Underlying native function: FMax 0x20d2d50)
	static double FMax(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FloatSpringInterp (Underlying native function: FloatSpringInterp 0x9df09a0)
	static float FloatSpringInterp(float& Current, float& Target, struct FFloatSpringState& SpringState, float& Stiffness, float& CriticalDampingFactor, float& DeltaTime, float& Mass, float& TargetVelocityAmount, bool& bClamp, float& MinValue, float& MaxValue, bool& bInitializeFromTarget); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetMathLibrary.FixedTurn (Underlying native function: FixedTurn 0x9df08a4)
	static float FixedTurn(float& InCurrent, float& InDesired, float& InDeltaRate); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FInterpTo_Constant (Underlying native function: FInterpTo_Constant 0x202a078)
	static double FInterpToConstant(double& Current, double& Target, double& DeltaTime, double& InterpSpeed); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FInterpTo (Underlying native function: FInterpTo 0x264f72c)
	static double FInterpTo(double& Current, double& Target, double& DeltaTime, double& InterpSpeed); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FInterpEaseInOut (Underlying native function: FInterpEaseInOut 0x9def688)
	static double FInterpEaseInOut(double& A, double& B, double& Alpha, double& Exponent); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FindRelativeLookAtRotation (Underlying native function: FindRelativeLookAtRotation 0x9df0408)
	static struct FRotator FindRelativeLookAtRotation(struct FTransform& StartTransform, struct FVector& TargetLocation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FindNearestPointsOnLineSegments (Underlying native function: FindNearestPointsOnLineSegments 0x9df01dc)
	static void FindNearestPointsOnLineSegments(struct FVector& Segment1Start, struct FVector& Segment1End, struct FVector& Segment2Start, struct FVector& Segment2End, struct FVector& Segment1Point, struct FVector& Segment2Point); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FindLookAtRotation (Underlying native function: FindLookAtRotation 0x9df0088)
	static struct FRotator FindLookAtRotation(struct FVector& Start, struct FVector& Target); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FindClosestPointOnSegment (Underlying native function: FindClosestPointOnSegment 0x9deff3c)
	static struct FVector FindClosestPointOnSegment(struct FVector& Point, struct FVector& SegmentStart, struct FVector& SegmentEnd); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FindClosestPointOnLine (Underlying native function: FindClosestPointOnLine 0x9defdf0)
	static struct FVector FindClosestPointOnLine(struct FVector& Point, struct FVector& LineOrigin, struct FVector& LineDirection); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FFloor64 (Underlying native function: FFloor64 0x9def5c8)
	static int64_t FFloor64(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FFloor (Underlying native function: FFloor 0x29acb68)
	static int FFloor(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FClamp (Underlying native function: FClamp 0x20798c8)
	static double FClamp(double& Value, double& min, double& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FCeil64 (Underlying native function: FCeil64 0x9def504)
	static int64_t FCeil64(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.FCeil (Underlying native function: FCeil 0x2327044)
	static int FCeil(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.exp (Underlying native function: exp 0x9deeed0)
	static double exp(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualExactly_VectorVector (Underlying native function: EqualExactly_VectorVector 0x9deeb64)
	static bool EqualExactlyVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualExactly_Vector4Vector4 (Underlying native function: EqualExactly_Vector4Vector4 0x9deea30)
	static bool EqualExactlyVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualExactly_Vector2DVector2D (Underlying native function: EqualExactly_Vector2DVector2D 0x9dee964)
	static bool EqualExactlyVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_VectorVector (Underlying native function: EqualEqual_VectorVector 0x27ea780)
	static bool EqualEqualVectorVector(struct FVector& A, struct FVector& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_Vector4Vector4 (Underlying native function: EqualEqual_Vector4Vector4 0x9dee7c0)
	static bool EqualEqualVector4Vector4(struct FVector4& A, struct FVector4& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_Vector2DVector2D (Underlying native function: EqualEqual_Vector2DVector2D 0x9dee690)
	static bool EqualEqualVector2DVector2D(struct FVector2D& A, struct FVector2D& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_TransformTransform (Underlying native function: EqualEqual_TransformTransform 0x9dee4f0)
	static bool EqualEqualTransformTransform(struct FTransform& A, struct FTransform& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_TimespanTimespan (Underlying native function: EqualEqual_TimespanTimespan 0x9ded8a8)
	static bool EqualEqualTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_RotatorRotator (Underlying native function: EqualEqual_RotatorRotator 0x9dee138)
	static bool EqualEqualRotatorRotator(struct FRotator& A, struct FRotator& B, float& ErrorTolerance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_QuatQuat (Underlying native function: EqualEqual_QuatQuat 0x9dedf80)
	static bool EqualEqualQuatQuat(struct FQuat& A, struct FQuat& B, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_ObjectObject (Underlying native function: EqualEqual_ObjectObject 0x1186e30)
	static bool EqualEqualObjectObject(class UObject*& A, class UObject*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_NameName (Underlying native function: EqualEqual_NameName 0x25d2c5c)
	static bool EqualEqualNameName(struct FName& A, struct FName& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_MatrixMatrix (Underlying native function: EqualEqual_MatrixMatrix 0x9dede24)
	static bool EqualEqualMatrixMatrix(struct FMatrix& A, struct FMatrix& B, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_LinearColorLinearColor (Underlying native function: EqualEqual_LinearColorLinearColor 0x9dedd34)
	static bool EqualEqualLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_IntInt (Underlying native function: EqualEqual_IntInt 0x1fbbaec)
	static bool EqualEqualIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_Int64Int64 (Underlying native function: EqualEqual_Int64Int64 0x1942390)
	static bool EqualEqualInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_DoubleDouble (Underlying native function: EqualEqual_DoubleDouble 0x20b92c8)
	static bool EqualEqualDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_DateTimeDateTime (Underlying native function: EqualEqual_DateTimeDateTime 0x9ded8a8)
	static bool EqualEqualDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_ClassClass (Underlying native function: EqualEqual_ClassClass 0x1186e30)
	static bool EqualEqualClassClass(class UClass*& A, class UClass*& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_ByteByte (Underlying native function: EqualEqual_ByteByte 0xef2aa8)
	static bool EqualEqualByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.EqualEqual_BoolBool (Underlying native function: EqualEqual_BoolBool 0x246d260)
	static bool EqualEqualBoolBool(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Equal_IntPointIntPoint (Underlying native function: Equal_IntPointIntPoint 0x9deec40)
	static bool EqualIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Ease (Underlying native function: Ease 0x9ded430)
	static double Ease(double& A, double& B, double& Alpha, struct TEnumAsByte<EEasingFunc>& EasingFunc, double& BlendExp, int& Steps); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FVector (Underlying native function: DynamicWeightedMovingAverage_FVector 0x9ded0f4)
	static struct FVector DynamicWeightedMovingAverageFVector(struct FVector& CurrentSample, struct FVector& PreviousSample, float& MaxDistance, float& MinWeight, float& MaxWeight); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_FRotator (Underlying native function: DynamicWeightedMovingAverage_FRotator 0x9decf38)
	static struct FRotator DynamicWeightedMovingAverageFRotator(struct FRotator& CurrentSample, struct FRotator& PreviousSample, float& MaxDistance, float& MinWeight, float& MaxWeight); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DynamicWeightedMovingAverage_Float (Underlying native function: DynamicWeightedMovingAverage_Float 0x9ded2b0)
	static float DynamicWeightedMovingAverageFloat(float& CurrentSample, float& PreviousSample, float& MaxDistance, float& MinWeight, float& MaxWeight); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DotProduct2D (Underlying native function: DotProduct2D 0x9deb0e8)
	static double DotProduct2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Dot_VectorVector (Underlying native function: Dot_VectorVector 0x22e7e74)
	static double DotVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_VectorVector (Underlying native function: Divide_VectorVector 0x9deaef4)
	static struct FVector DivideVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_VectorInt (Underlying native function: Divide_VectorInt 0x9deaddc)
	static struct FVector DivideVectorInt(struct FVector& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_VectorFloat (Underlying native function: Divide_VectorFloat 0x1f4cd74)
	static struct FVector DivideVectorFloat(struct FVector& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_Vector4Vector4 (Underlying native function: Divide_Vector4Vector4 0x9deaca8)
	static struct FVector4 DivideVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_Vector2DVector2D (Underlying native function: Divide_Vector2DVector2D 0x9deaba4)
	static struct FVector2D DivideVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_Vector2DFloat (Underlying native function: Divide_Vector2DFloat 0x9deaaa4)
	static struct FVector2D DivideVector2DFloat(struct FVector2D& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_TimespanFloat (Underlying native function: Divide_TimespanFloat 0x9dea9d0)
	static struct FTimespan* DivideTimespanFloat(struct FTimespan*& A, float& Scalar); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_LinearColorLinearColor (Underlying native function: Divide_LinearColorLinearColor 0x9dea8d0)
	static struct FLinearColor DivideLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_IntPointIntPoint (Underlying native function: Divide_IntPointIntPoint 0x9dea7d8)
	static struct FIntPoint* DivideIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_IntPointInt (Underlying native function: Divide_IntPointInt 0x9dea6ec)
	static struct FIntPoint* DivideIntPointInt(struct FIntPoint*& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_IntInt (Underlying native function: Divide_IntInt 0x224cd1c)
	static int DivideIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_Int64Int64 (Underlying native function: Divide_Int64Int64 0x9dea610)
	static int64_t DivideInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_DoubleDouble (Underlying native function: Divide_DoubleDouble 0x1fbba34)
	static double DivideDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Divide_ByteByte (Underlying native function: Divide_ByteByte 0x9dea530)
	static unsigned char DivideByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DistanceSquared2D (Underlying native function: DistanceSquared2D 0x9dea460)
	static double DistanceSquared2D(struct FVector2D& v1, struct FVector2D& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Distance2D (Underlying native function: Distance2D 0x9dea38c)
	static double Distance2D(struct FVector2D& v1, struct FVector2D& v2); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegTan (Underlying native function: DegTan 0x9dea274)
	static double DegTan(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegSin (Underlying native function: DegSin 0x9dea1e4)
	static double DegSin(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegreesToRadians (Underlying native function: DegreesToRadians 0x9dea304)
	static double DegreesToRadians(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegCos (Underlying native function: DegCos 0x9dea154)
	static double DegCos(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegAtan2 (Underlying native function: DegAtan2 0x9de9fe8)
	static double DegAtan2(double& Y, double& X); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegAtan (Underlying native function: DegAtan 0x9dea0c4)
	static double DegAtan(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegAsin (Underlying native function: DegAsin 0x9de9f3c)
	static double DegAsin(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DegAcos (Underlying native function: DegAcos 0x26d2bfc)
	static double DegAcos(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DaysInYear (Underlying native function: DaysInYear 0x9de9eb4)
	static int DaysInYear(int& Year); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DaysInMonth (Underlying native function: DaysInMonth 0x9de9dd8)
	static int DaysInMonth(int& Year, int& Month); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DateTimeMinValue (Underlying native function: DateTimeMinValue 0x6cc27c4)
	static struct FDateTime* DateTimeMinValue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DateTimeMaxValue (Underlying native function: DateTimeMaxValue 0x9de9dbc)
	static struct FDateTime* DateTimeMaxValue(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DateTimeFromString (Underlying native function: DateTimeFromString 0x9de9bf4)
	static bool DateTimeFromString(struct FString& DateTimeString, struct FDateTime*& Result); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.DateTimeFromIsoString (Underlying native function: DateTimeFromIsoString 0x9de9a20)
	static bool DateTimeFromIsoString(struct FString& IsoString, struct FDateTime*& Result); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.CrossProduct2D (Underlying native function: CrossProduct2D 0x9de96a8)
	static double CrossProduct2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Cross_VectorVector (Underlying native function: Cross_VectorVector 0x9de9770)
	static struct FVector CrossVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.CreateVectorFromYawPitch (Underlying native function: CreateVectorFromYawPitch 0x9de959c)
	static struct FVector CreateVectorFromYawPitch(float& Yaw, float& Pitch, float& Length); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.cos (Underlying native function: cos 0x9de8f64)
	static double cos(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ConvertTransformToRelative (Underlying native function: ConvertTransformToRelative 0x9de8da0)
	static struct FTransform ConvertTransformToRelative(struct FTransform& Transform, struct FTransform& ParentTransform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_VectorToVector2D (Underlying native function: Conv_VectorToVector2D 0x9de893c)
	static struct FVector2D ConvVectorToVector2D(struct FVector& InVector); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_VectorToTransform (Underlying native function: Conv_VectorToTransform 0x2736198)
	static struct FTransform ConvVectorToTransform(struct FVector& InLocation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_VectorToRotator (Underlying native function: Conv_VectorToRotator 0x23de124)
	static struct FRotator ConvVectorToRotator(struct FVector& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_VectorToQuaternion (Underlying native function: Conv_VectorToQuaternion 0x9de87e4)
	static struct FQuat ConvVectorToQuaternion(struct FVector& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_VectorToLinearColor (Underlying native function: Conv_VectorToLinearColor 0x20892ac)
	static struct FLinearColor ConvVectorToLinearColor(struct FVector& InVec); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToVector (Underlying native function: Conv_Vector4ToVector 0x9de8744)
	static struct FVector ConvVector4ToVector(struct FVector4& InVector4); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToRotator (Underlying native function: Conv_Vector4ToRotator 0x9de8638)
	static struct FRotator ConvVector4ToRotator(struct FVector4& InVec); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Vector4ToQuaternion (Underlying native function: Conv_Vector4ToQuaternion 0x9de858c)
	static struct FQuat ConvVector4ToQuaternion(struct FVector4& InVec); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Vector2DToVector (Underlying native function: Conv_Vector2DToVector 0x9de8354)
	static struct FVector ConvVector2DToVector(struct FVector2D& InVector2D, float& Z); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Vector2DToIntPoint (Underlying native function: Conv_Vector2DToIntPoint 0x9de82a4)
	static struct FIntPoint* ConvVector2DToIntPoint(struct FVector2D& InVector2D); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_TransformToMatrix (Underlying native function: Conv_TransformToMatrix 0x9de7e98)
	static struct FMatrix ConvTransformToMatrix(struct FTransform& Transform); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_RotatorToVector (Underlying native function: Conv_RotatorToVector 0x9de6594)
	static struct FVector ConvRotatorToVector(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_RotatorToTransform (Underlying native function: Conv_RotatorToTransform 0x9de64c0)
	static struct FTransform ConvRotatorToTransform(struct FRotator& InRotator); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_RotatorToQuaternion (Underlying native function: Conv_RotatorToQuaternion 0x9de6360)
	static struct FQuat ConvRotatorToQuaternion(struct FRotator& InRot); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_MatrixToTransform (Underlying native function: Conv_MatrixToTransform 0x9de5ec4)
	static struct FTransform ConvMatrixToTransform(struct FMatrix& InMatrix); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_MatrixToRotator (Underlying native function: Conv_MatrixToRotator 0x9de5c48)
	static struct FRotator ConvMatrixToRotator(struct FMatrix& InMatrix); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_LinearColorToVector (Underlying native function: Conv_LinearColorToVector 0x2267d68)
	static struct FVector ConvLinearColorToVector(struct FLinearColor& InLinearColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_LinearColorToColor (Underlying native function: Conv_LinearColorToColor 0x9de5a54)
	static struct FColor ConvLinearColorToColor(struct FLinearColor& InLinearColor, bool& InUseSRGB); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntVectorToVector (Underlying native function: Conv_IntVectorToVector 0x9de5998)
	static struct FVector ConvIntVectorToVector(struct FIntVector& InIntVector); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToVector (Underlying native function: Conv_IntToVector 0x9de5780)
	static struct FVector ConvIntToVector(int& inInt); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToIntVector (Underlying native function: Conv_IntToIntVector 0x9de5700)
	static struct FIntVector ConvIntToIntVector(int& inInt); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToInt64 (Underlying native function: Conv_IntToInt64 0x26483ac)
	static int64_t ConvIntToInt64(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToFloat (Underlying native function: Conv_IntToFloat 0x20b8e7c)
	static float ConvIntToFloat(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToDouble (Underlying native function: Conv_IntToDouble 0x2040854)
	static double ConvIntToDouble(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToByte (Underlying native function: Conv_IntToByte 0x245e08c)
	static unsigned char ConvIntToByte(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntToBool (Underlying native function: Conv_IntToBool 0x2a7ad5c)
	static bool ConvIntToBool(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_IntPointToVector2D (Underlying native function: Conv_IntPointToVector2D 0x9de566c)
	static struct FVector2D ConvIntPointToVector2D(struct FIntPoint*& InIntPoint); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Int64ToInt (Underlying native function: Conv_Int64ToInt 0x6a7df10)
	static int ConvInt64ToInt(int64_t& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Int64ToDouble (Underlying native function: Conv_Int64ToDouble 0x9de53d0)
	static double ConvInt64ToDouble(int64_t& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_Int64ToByte (Underlying native function: Conv_Int64ToByte 0x9de5358)
	static unsigned char ConvInt64ToByte(int64_t& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_FloatToVector (Underlying native function: Conv_FloatToVector 0x2444998)
	static struct FVector ConvFloatToVector(float& InFloat); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_FloatToLinearColor (Underlying native function: Conv_FloatToLinearColor 0x9de5088)
	static struct FLinearColor ConvFloatToLinearColor(float& InFloat); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_FloatToDouble (Underlying native function: Conv_FloatToDouble 0x9de5004)
	static double ConvFloatToDouble(float& InFloat); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_DoubleToVector (Underlying native function: Conv_DoubleToVector 0x277b724)
	static struct FVector ConvDoubleToVector(double& InDouble); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_DoubleToLinearColor (Underlying native function: Conv_DoubleToLinearColor 0x9de4de4)
	static struct FLinearColor ConvDoubleToLinearColor(double& InDouble); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_DoubleToInt64 (Underlying native function: Conv_DoubleToInt64 0x2801308)
	static int64_t ConvDoubleToInt64(double& InDouble); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_DoubleToFloat (Underlying native function: Conv_DoubleToFloat 0x9de4d60)
	static float ConvDoubleToFloat(double& InDouble); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_ColorToLinearColor (Underlying native function: Conv_ColorToLinearColor 0x262dfa8)
	static struct FLinearColor ConvColorToLinearColor(struct FColor& InColor); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_ByteToInt64 (Underlying native function: Conv_ByteToInt64 0x9de4a68)
	static int64_t ConvByteToInt64(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_ByteToInt (Underlying native function: Conv_ByteToInt 0x2585c00)
	static int ConvByteToInt(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_ByteToFloat (Underlying native function: Conv_ByteToFloat 0x9de49e4)
	static float ConvByteToFloat(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_ByteToDouble (Underlying native function: Conv_ByteToDouble 0x9de4960)
	static double ConvByteToDouble(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_BoolToInt (Underlying native function: Conv_BoolToInt 0x2417210)
	static int ConvBoolToInt(bool& InBool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_BoolToFloat (Underlying native function: Conv_BoolToFloat 0x21782b4)
	static float ConvBoolToFloat(bool& InBool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Conv_BoolToByte (Underlying native function: Conv_BoolToByte 0x9de48e4)
	static unsigned char ConvBoolToByte(bool& InBool); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ComposeTransforms (Underlying native function: ComposeTransforms 0x9de3f64)
	static struct FTransform ComposeTransforms(struct FTransform& A, struct FTransform& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ComposeRotators (Underlying native function: ComposeRotators 0x237456c)
	static struct FRotator ComposeRotators(struct FRotator& A, struct FRotator& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClassIsChildOf (Underlying native function: ClassIsChildOf 0x9de36ec)
	static bool ClassIsChildOf(class UClass*& TestClass, class UClass*& ParentClass); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClampVectorSize (Underlying native function: ClampVectorSize 0x9de3530)
	static struct FVector ClampVectorSize(struct FVector& A, double& min, double& max); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClampInt64 (Underlying native function: ClampInt64 0x9de3430)
	static int64_t ClampInt64(int64_t& Value, int64_t& min, int64_t& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClampAxis (Underlying native function: ClampAxis 0x9de3388)
	static float ClampAxis(float& Angle); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClampAxes2D (Underlying native function: ClampAxes2D 0x9de3260)
	static struct FVector2D ClampAxes2D(struct FVector2D& A, double& MinAxisVal, double& MaxAxisVal); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.ClampAngle (Underlying native function: ClampAngle 0x26d89a0)
	static double ClampAngle(double& AngleDegrees, double& MinAngleDegrees, double& MaxAngleDegrees); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.clamp (Underlying native function: clamp 0x1fb416c)
	static int clamp(int& Value, int& min, int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.CInterpTo (Underlying native function: CInterpTo 0x9de1268)
	static struct FLinearColor CInterpTo(struct FLinearColor& Current, struct FLinearColor& Target, float& DeltaTime, float& InterpSpeed); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector_NetQuantizeNormal (Underlying native function: BreakVector_NetQuantizeNormal 0x9ddea74)
	static void BreakVectorNetQuantizeNormal(struct FVector_NetQuantizeNormal& InVec, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector_NetQuantize100 (Underlying native function: BreakVector_NetQuantize100 0x9ddea74)
	static void BreakVectorNetQuantize100(struct FVector_NetQuantize100& InVec, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector_NetQuantize10 (Underlying native function: BreakVector_NetQuantize10 0x9ddea74)
	static void BreakVectorNetQuantize10(struct FVector_NetQuantize10& InVec, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector_NetQuantize (Underlying native function: BreakVector_NetQuantize 0x9ddea74)
	static void BreakVectorNetQuantize(struct FVector_NetQuantize& InVec, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector4 (Underlying native function: BreakVector4 0x2846a44)
	static void BreakVector4(struct FVector4& InVec, double& X, double& Y, double& Z, double& W); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector3f (Underlying native function: BreakVector3f 0x1f701d4)
	static void BreakVector3f(struct FVector3f& InVec, float& X, float& Y, float& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector2D (Underlying native function: BreakVector2D 0x1e93cdc)
	static void BreakVector2D(struct FVector2D& InVec, double& X, double& Y); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakVector (Underlying native function: BreakVector 0x1e93ddc)
	static void BreakVector(struct FVector& InVec, double& X, double& Y, double& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakTransform (Underlying native function: BreakTransform 0x1e7fdb4)
	static void BreakTransform(struct FTransform& InTransform, struct FVector& Location, struct FRotator& Rotation, struct FVector& Scale); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakTimespan2 (Underlying native function: BreakTimespan2 0x9dde64c)
	static void BreakTimespan2(struct FTimespan*& InTimespan, int& Days, int& Hours, int& Minutes, int& Seconds, int& FractionNano); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakTimespan (Underlying native function: BreakTimespan 0x9dde860)
	static void BreakTimespan(struct FTimespan*& InTimespan, int& Days, int& Hours, int& Minutes, int& Seconds, int& Milliseconds); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakRotIntoAxes (Underlying native function: BreakRotIntoAxes 0x9dddbc8)
	static void BreakRotIntoAxes(struct FRotator& InRot, struct FVector& X, struct FVector& Y, struct FVector& Z); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakRotator (Underlying native function: BreakRotator 0x1f707cc)
	static void BreakRotator(struct FRotator& InRot, float& Roll, float& Pitch, float& Yaw); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakRandomStream (Underlying native function: BreakRandomStream 0x9dddaf4)
	static void BreakRandomStream(struct FRandomStream*& InRandomStream, int& InitialSeed); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakQuat (Underlying native function: BreakQuat 0x9ddd904)
	static void BreakQuat(struct FQuat& InQuat, float& X, float& Y, float& Z, float& W); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakQualifiedFrameTime (Underlying native function: BreakQualifiedFrameTime 0x9ddd778)
	static void BreakQualifiedFrameTime(struct FQualifiedFrameTime& InFrameTime, struct FFrameNumber& Frame, struct FFrameRate*& FrameRate, float& SubFrame); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakFrameRate (Underlying native function: BreakFrameRate 0x9ddd648)
	static void BreakFrameRate(struct FFrameRate*& InFrameRate, int& Numerator, int& Denominator); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakDateTime (Underlying native function: BreakDateTime 0x9ddd394)
	static void BreakDateTime(struct FDateTime*& InDateTime, int& Year, int& Month, int& Day, int& Hour, int& Minute, int& Second, int& Millisecond); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakColor (Underlying native function: BreakColor 0x1f70668)
	static void BreakColor(struct FLinearColor& InColor, float& R, float& G, float& B, float& A); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BreakBoxSphereBounds (Underlying native function: BreakBoxSphereBounds 0x9ddd1ec)
	static void BreakBoxSphereBounds(struct FBoxSphereBounds& InBoxSphereBounds, struct FVector& Origin, struct FVector& BoxExtent, float& SphereRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BooleanXOR (Underlying native function: BooleanXOR 0x9ddb220)
	static bool BooleanXOR(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BooleanOR (Underlying native function: BooleanOR 0x1d4c948)
	static bool BooleanOR(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BooleanNOR (Underlying native function: BooleanNOR 0x9ddb154)
	static bool BooleanNOR(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BooleanNAND (Underlying native function: BooleanNAND 0x9ddb088)
	static bool BooleanNAND(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BooleanAND (Underlying native function: BooleanAND 0x485bb7c)
	static bool BooleanAND(bool& A, bool& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BMin (Underlying native function: BMin 0x9ddacec)
	static unsigned char BMin(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.BMax (Underlying native function: BMax 0x9ddac24)
	static unsigned char BMax(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.AverageOfIntArray (Underlying native function: AverageOfIntArray 0x9ddab34)
	static void AverageOfIntArray(struct TArray<int>& IntArray, float& AverageValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Atan2 (Underlying native function: Atan2 0x9dda9d8)
	static double Atan2(double& Y, double& X); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.atan (Underlying native function: atan 0x9ddaaac)
	static double atan(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.asin (Underlying native function: asin 0x9dda934)
	static double asin(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.And_IntInt (Underlying native function: And_IntInt 0x9dd9d58)
	static int AndIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.And_Int64Int64 (Underlying native function: And_Int64Int64 0x9dd9c98)
	static int64_t AndInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_VectorVector (Underlying native function: Add_VectorVector 0x217d654)
	static struct FVector AddVectorVector(struct FVector& A, struct FVector& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_VectorInt (Underlying native function: Add_VectorInt 0x9dd9bc0)
	static struct FVector AddVectorInt(struct FVector& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_VectorFloat (Underlying native function: Add_VectorFloat 0x9dd9ae8)
	static struct FVector AddVectorFloat(struct FVector& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_Vector4Vector4 (Underlying native function: Add_Vector4Vector4 0x9dd99b4)
	static struct FVector4 AddVector4Vector4(struct FVector4& A, struct FVector4& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_Vector2DVector2D (Underlying native function: Add_Vector2DVector2D 0x9dd98ec)
	static struct FVector2D AddVector2DVector2D(struct FVector2D& A, struct FVector2D& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_Vector2DFloat (Underlying native function: Add_Vector2DFloat 0x9dd9818)
	static struct FVector2D AddVector2DFloat(struct FVector2D& A, double& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_TimespanTimespan (Underlying native function: Add_TimespanTimespan 0x9dd9160)
	static struct FTimespan* AddTimespanTimespan(struct FTimespan*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_QuatQuat (Underlying native function: Add_QuatQuat 0x9dd9738)
	static struct FQuat AddQuatQuat(struct FQuat& A, struct FQuat& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_MatrixMatrix (Underlying native function: Add_MatrixMatrix 0x9dd9588)
	static struct FMatrix AddMatrixMatrix(struct FMatrix& A, struct FMatrix& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_LinearColorLinearColor (Underlying native function: Add_LinearColorLinearColor 0x9dd9488)
	static struct FLinearColor AddLinearColorLinearColor(struct FLinearColor& A, struct FLinearColor& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_IntPointIntPoint (Underlying native function: Add_IntPointIntPoint 0x9dd93b4)
	static struct FIntPoint* AddIntPointIntPoint(struct FIntPoint*& A, struct FIntPoint*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_IntPointInt (Underlying native function: Add_IntPointInt 0x9dd92e0)
	static struct FIntPoint* AddIntPointInt(struct FIntPoint*& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_IntInt (Underlying native function: Add_IntInt 0xef4504)
	static int AddIntInt(int& A, int& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_Int64Int64 (Underlying native function: Add_Int64Int64 0x9dd9220)
	static int64_t AddInt64Int64(int64_t& A, int64_t& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_DoubleDouble (Underlying native function: Add_DoubleDouble 0x21016a8)
	static double AddDoubleDouble(double& A, double& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_DateTimeTimespan (Underlying native function: Add_DateTimeTimespan 0x9dd9160)
	static struct FDateTime* AddDateTimeTimespan(struct FDateTime*& A, struct FTimespan*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_DateTimeDateTime (Underlying native function: Add_DateTimeDateTime 0x9dd9160)
	static struct FDateTime* AddDateTimeDateTime(struct FDateTime*& A, struct FDateTime*& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Add_ByteByte (Underlying native function: Add_ByteByte 0x9dd90a4)
	static unsigned char AddByteByte(unsigned char& A, unsigned char& B); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.acos (Underlying native function: acos 0x9dd8ee8)
	static double acos(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Abs_Int64 (Underlying native function: Abs_Int64 0x9dd8de8)
	static int64_t AbsInt64(int64_t& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.Abs_Int (Underlying native function: Abs_Int 0x9dd8e6c)
	static int AbsInt(int& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetMathLibrary.abs (Underlying native function: abs 0x21b4844)
	static double abs(double& A); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

