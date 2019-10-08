/**
 * File generated by Jenny -- https://github.com/LanderlYoung/Jenny
 *
 * DO NOT EDIT THIS FILE.
 *
 * For bug report, please refer to github issue tracker https://github.com/LanderlYoung/Jenny/issues,
 * or contact author landerlyoung@gmail.com.
 */
#include "android_RectProxy.h"

namespace android {
jclass RectProxy::sClazz = nullptr;

// thread safe init
std::mutex RectProxy::sInitLock;
std::atomic_bool RectProxy::sInited;

/*static*/ bool RectProxy::initClazz(JNIEnv *env) {
#define JENNY_CHECK_NULL(val)                      \
       do {                                        \
           if ((val) == nullptr) {                 \
               return false;                       \
           }                                       \
       } while(false)

    if (!sInited) {
        std::lock_guard<std::mutex> lg(sInitLock);
        if (!sInited) {
            auto clazz = env->FindClass(FULL_CLASS_NAME);
            JENNY_CHECK_NULL(clazz);
            sClazz = reinterpret_cast<jclass>(env->NewGlobalRef(clazz));
            env->DeleteLocalRef(clazz);
            JENNY_CHECK_NULL(sClazz);
            sConstruct_0 = env->GetMethodID(sClazz, "<init>", "()V");
            JENNY_CHECK_NULL(sConstruct_0);

            sConstruct_1 = env->GetMethodID(sClazz, "<init>", "(IIII)V");
            JENNY_CHECK_NULL(sConstruct_1);

            sConstruct_2 = env->GetMethodID(sClazz, "<init>", "(Landroid/graphics/Rect;)V");
            JENNY_CHECK_NULL(sConstruct_2);


            sMethod_equals_0 = env->GetMethodID(sClazz, "equals", "(Ljava/lang/Object;)Z");
            JENNY_CHECK_NULL(sMethod_equals_0);

            sMethod_hashCode_0 = env->GetMethodID(sClazz, "hashCode", "()I");
            JENNY_CHECK_NULL(sMethod_hashCode_0);

            sMethod_toString_0 = env->GetMethodID(sClazz, "toString", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_toString_0);

            sMethod_toShortString_0 = env->GetMethodID(sClazz, "toShortString", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_toShortString_0);

            sMethod_flattenToString_0 = env->GetMethodID(sClazz, "flattenToString", "()Ljava/lang/String;");
            JENNY_CHECK_NULL(sMethod_flattenToString_0);

            sMethod_unflattenFromString_0 = env->GetStaticMethodID(sClazz, "unflattenFromString", "(Ljava/lang/String;)Landroid/graphics/Rect;");
            JENNY_CHECK_NULL(sMethod_unflattenFromString_0);

            sMethod_isEmpty_0 = env->GetMethodID(sClazz, "isEmpty", "()Z");
            JENNY_CHECK_NULL(sMethod_isEmpty_0);

            sMethod_width_0 = env->GetMethodID(sClazz, "width", "()I");
            JENNY_CHECK_NULL(sMethod_width_0);

            sMethod_height_0 = env->GetMethodID(sClazz, "height", "()I");
            JENNY_CHECK_NULL(sMethod_height_0);

            sMethod_centerX_0 = env->GetMethodID(sClazz, "centerX", "()I");
            JENNY_CHECK_NULL(sMethod_centerX_0);

            sMethod_centerY_0 = env->GetMethodID(sClazz, "centerY", "()I");
            JENNY_CHECK_NULL(sMethod_centerY_0);

            sMethod_exactCenterX_0 = env->GetMethodID(sClazz, "exactCenterX", "()F");
            JENNY_CHECK_NULL(sMethod_exactCenterX_0);

            sMethod_exactCenterY_0 = env->GetMethodID(sClazz, "exactCenterY", "()F");
            JENNY_CHECK_NULL(sMethod_exactCenterY_0);

            sMethod_setEmpty_0 = env->GetMethodID(sClazz, "setEmpty", "()V");
            JENNY_CHECK_NULL(sMethod_setEmpty_0);

            sMethod_set_0 = env->GetMethodID(sClazz, "set", "(IIII)V");
            JENNY_CHECK_NULL(sMethod_set_0);

            sMethod_set_1 = env->GetMethodID(sClazz, "set", "(Landroid/graphics/Rect;)V");
            JENNY_CHECK_NULL(sMethod_set_1);

            sMethod_offset_0 = env->GetMethodID(sClazz, "offset", "(II)V");
            JENNY_CHECK_NULL(sMethod_offset_0);

            sMethod_offsetTo_0 = env->GetMethodID(sClazz, "offsetTo", "(II)V");
            JENNY_CHECK_NULL(sMethod_offsetTo_0);

            sMethod_inset_0 = env->GetMethodID(sClazz, "inset", "(II)V");
            JENNY_CHECK_NULL(sMethod_inset_0);

            sMethod_contains_0 = env->GetMethodID(sClazz, "contains", "(II)Z");
            JENNY_CHECK_NULL(sMethod_contains_0);

            sMethod_contains_1 = env->GetMethodID(sClazz, "contains", "(IIII)Z");
            JENNY_CHECK_NULL(sMethod_contains_1);

            sMethod_contains_2 = env->GetMethodID(sClazz, "contains", "(Landroid/graphics/Rect;)Z");
            JENNY_CHECK_NULL(sMethod_contains_2);

            sMethod_intersect_0 = env->GetMethodID(sClazz, "intersect", "(IIII)Z");
            JENNY_CHECK_NULL(sMethod_intersect_0);

            sMethod_intersect_1 = env->GetMethodID(sClazz, "intersect", "(Landroid/graphics/Rect;)Z");
            JENNY_CHECK_NULL(sMethod_intersect_1);

            sMethod_setIntersect_0 = env->GetMethodID(sClazz, "setIntersect", "(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z");
            JENNY_CHECK_NULL(sMethod_setIntersect_0);

            sMethod_intersects_0 = env->GetMethodID(sClazz, "intersects", "(IIII)Z");
            JENNY_CHECK_NULL(sMethod_intersects_0);

            sMethod_intersects_1 = env->GetStaticMethodID(sClazz, "intersects", "(Landroid/graphics/Rect;Landroid/graphics/Rect;)Z");
            JENNY_CHECK_NULL(sMethod_intersects_1);

            sMethod_union_0 = env->GetMethodID(sClazz, "union", "(IIII)V");
            JENNY_CHECK_NULL(sMethod_union_0);

            sMethod_union_1 = env->GetMethodID(sClazz, "union", "(Landroid/graphics/Rect;)V");
            JENNY_CHECK_NULL(sMethod_union_1);

            sMethod_union_2 = env->GetMethodID(sClazz, "union", "(II)V");
            JENNY_CHECK_NULL(sMethod_union_2);

            sMethod_sort_0 = env->GetMethodID(sClazz, "sort", "()V");
            JENNY_CHECK_NULL(sMethod_sort_0);

            sMethod_describeContents_0 = env->GetMethodID(sClazz, "describeContents", "()I");
            JENNY_CHECK_NULL(sMethod_describeContents_0);

            sMethod_writeToParcel_0 = env->GetMethodID(sClazz, "writeToParcel", "(Landroid/os/Parcel;I)V");
            JENNY_CHECK_NULL(sMethod_writeToParcel_0);

            sMethod_readFromParcel_0 = env->GetMethodID(sClazz, "readFromParcel", "(Landroid/os/Parcel;)V");
            JENNY_CHECK_NULL(sMethod_readFromParcel_0);


            sField_CREATOR_0 = env->GetStaticFieldID(sClazz, "CREATOR", "Landroid/os/Parcelable$Creator;");
            JENNY_CHECK_NULL(sField_CREATOR_0);

            sField_bottom_1 = env->GetFieldID(sClazz, "bottom", "I");
            JENNY_CHECK_NULL(sField_bottom_1);

            sField_left_2 = env->GetFieldID(sClazz, "left", "I");
            JENNY_CHECK_NULL(sField_left_2);

            sField_right_3 = env->GetFieldID(sClazz, "right", "I");
            JENNY_CHECK_NULL(sField_right_3);

            sField_top_4 = env->GetFieldID(sClazz, "top", "I");
            JENNY_CHECK_NULL(sField_top_4);


            sInited = true;
        }
    }
#undef JENNY_CHECK_NULL
   return true;
}

/*static*/ void RectProxy::releaseClazz(JNIEnv *env) {
    if (sInited) {
        std::lock_guard<std::mutex> lg(sInitLock);
        if (sInited) {
            env->DeleteLocalRef(sClazz);
            sInited = false;
        }
    }
}

jmethodID RectProxy::sConstruct_0;
jmethodID RectProxy::sConstruct_1;
jmethodID RectProxy::sConstruct_2;

jmethodID RectProxy::sMethod_equals_0;
jmethodID RectProxy::sMethod_hashCode_0;
jmethodID RectProxy::sMethod_toString_0;
jmethodID RectProxy::sMethod_toShortString_0;
jmethodID RectProxy::sMethod_flattenToString_0;
jmethodID RectProxy::sMethod_unflattenFromString_0;
jmethodID RectProxy::sMethod_isEmpty_0;
jmethodID RectProxy::sMethod_width_0;
jmethodID RectProxy::sMethod_height_0;
jmethodID RectProxy::sMethod_centerX_0;
jmethodID RectProxy::sMethod_centerY_0;
jmethodID RectProxy::sMethod_exactCenterX_0;
jmethodID RectProxy::sMethod_exactCenterY_0;
jmethodID RectProxy::sMethod_setEmpty_0;
jmethodID RectProxy::sMethod_set_0;
jmethodID RectProxy::sMethod_set_1;
jmethodID RectProxy::sMethod_offset_0;
jmethodID RectProxy::sMethod_offsetTo_0;
jmethodID RectProxy::sMethod_inset_0;
jmethodID RectProxy::sMethod_contains_0;
jmethodID RectProxy::sMethod_contains_1;
jmethodID RectProxy::sMethod_contains_2;
jmethodID RectProxy::sMethod_intersect_0;
jmethodID RectProxy::sMethod_intersect_1;
jmethodID RectProxy::sMethod_setIntersect_0;
jmethodID RectProxy::sMethod_intersects_0;
jmethodID RectProxy::sMethod_intersects_1;
jmethodID RectProxy::sMethod_union_0;
jmethodID RectProxy::sMethod_union_1;
jmethodID RectProxy::sMethod_union_2;
jmethodID RectProxy::sMethod_sort_0;
jmethodID RectProxy::sMethod_describeContents_0;
jmethodID RectProxy::sMethod_writeToParcel_0;
jmethodID RectProxy::sMethod_readFromParcel_0;

jfieldID RectProxy::sField_CREATOR_0;
jfieldID RectProxy::sField_bottom_1;
jfieldID RectProxy::sField_left_2;
jfieldID RectProxy::sField_right_3;
jfieldID RectProxy::sField_top_4;

} // endof namespace android
