/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.app.backup.RestoreObserver
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL
#define J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace app { namespace backup {

	class RestoreObserver;
	class RestoreObserver
		: public object<RestoreObserver>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit RestoreObserver(jobject jobj)
		: object<RestoreObserver>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		RestoreObserver();
		void restoreStarting(jint);
		void onUpdate(jint, local_ref< java::lang::String >  const&);
		void restoreFinished(jint);
	}; //class RestoreObserver

} //namespace backup
} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL
#define J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL

namespace j2cpp {



android::app::backup::RestoreObserver::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


android::app::backup::RestoreObserver::RestoreObserver()
: object<android::app::backup::RestoreObserver>(
	call_new_object<
		android::app::backup::RestoreObserver::J2CPP_CLASS_NAME,
		android::app::backup::RestoreObserver::J2CPP_METHOD_NAME(0),
		android::app::backup::RestoreObserver::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


void android::app::backup::RestoreObserver::restoreStarting(jint a0)
{
	return call_method<
		android::app::backup::RestoreObserver::J2CPP_CLASS_NAME,
		android::app::backup::RestoreObserver::J2CPP_METHOD_NAME(1),
		android::app::backup::RestoreObserver::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject(), a0);
}

void android::app::backup::RestoreObserver::onUpdate(jint a0, local_ref< java::lang::String > const &a1)
{
	return call_method<
		android::app::backup::RestoreObserver::J2CPP_CLASS_NAME,
		android::app::backup::RestoreObserver::J2CPP_METHOD_NAME(2),
		android::app::backup::RestoreObserver::J2CPP_METHOD_SIGNATURE(2), 
		void
	>(get_jobject(), a0, a1);
}

void android::app::backup::RestoreObserver::restoreFinished(jint a0)
{
	return call_method<
		android::app::backup::RestoreObserver::J2CPP_CLASS_NAME,
		android::app::backup::RestoreObserver::J2CPP_METHOD_NAME(3),
		android::app::backup::RestoreObserver::J2CPP_METHOD_SIGNATURE(3), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::app::backup::RestoreObserver,"android/app/backup/RestoreObserver")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,1,"restoreStarting","(I)V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,2,"onUpdate","(ILjava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::app::backup::RestoreObserver,3,"restoreFinished","(I)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_BACKUP_RESTOREOBSERVER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
