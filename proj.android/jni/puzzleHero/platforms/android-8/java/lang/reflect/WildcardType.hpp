/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.lang.reflect.WildcardType
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_DECL
#define J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { namespace reflect { class Type; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/reflect/Type.hpp>


namespace j2cpp {

namespace java { namespace lang { namespace reflect {

	class WildcardType;
	class WildcardType
		: public object<WildcardType>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit WildcardType(jobject jobj)
		: object<WildcardType>(jobj)
		{
		}

		operator local_ref<java::lang::reflect::Type>() const;
		operator local_ref<java::lang::Object>() const;


		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > getUpperBounds();
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> > getLowerBounds();
	}; //class WildcardType

} //namespace reflect
} //namespace lang
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_IMPL
#define J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_IMPL

namespace j2cpp {



java::lang::reflect::WildcardType::operator local_ref<java::lang::reflect::Type>() const
{
	return local_ref<java::lang::reflect::Type>(get_jobject());
}

java::lang::reflect::WildcardType::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Type >, 1> > java::lang::reflect::WildcardType::getUpperBounds()
{
	return call_method<
		java::lang::reflect::WildcardType::J2CPP_CLASS_NAME,
		java::lang::reflect::WildcardType::J2CPP_METHOD_NAME(0),
		java::lang::reflect::WildcardType::J2CPP_METHOD_SIGNATURE(0), 
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> >
	>(get_jobject());
}

local_ref< array< local_ref< java::lang::reflect::Type >, 1> > java::lang::reflect::WildcardType::getLowerBounds()
{
	return call_method<
		java::lang::reflect::WildcardType::J2CPP_CLASS_NAME,
		java::lang::reflect::WildcardType::J2CPP_METHOD_NAME(1),
		java::lang::reflect::WildcardType::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< array< local_ref< java::lang::reflect::Type >, 1> >
	>(get_jobject());
}


J2CPP_DEFINE_CLASS(java::lang::reflect::WildcardType,"java/lang/reflect/WildcardType")
J2CPP_DEFINE_METHOD(java::lang::reflect::WildcardType,0,"getUpperBounds","()[java.lang.reflect.Type")
J2CPP_DEFINE_METHOD(java::lang::reflect::WildcardType,1,"getLowerBounds","()[java.lang.reflect.Type")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_REFLECT_WILDCARDTYPE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION