/*
 * Generated by gdbus-codegen 2.56.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the D-Bus interface description
 * it was derived from.
 */

#ifndef __GROUP_GENERATED_H__
#define __GROUP_GENERATED_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.group.admin */

#define GROUP_TYPE_ADMIN (group_admin_get_type ())
#define GROUP_ADMIN(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GROUP_TYPE_ADMIN, groupAdmin))
#define GROUP_IS_ADMIN(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GROUP_TYPE_ADMIN))
#define GROUP_ADMIN_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), GROUP_TYPE_ADMIN, groupAdminIface))

struct _groupAdmin;
typedef struct _groupAdmin groupAdmin;
typedef struct _groupAdminIface groupAdminIface;

struct _groupAdminIface
{
  GTypeInterface parent_iface;



  gboolean (*handle_create_group) (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  gboolean (*handle_delete_group) (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    gint64 arg_id);

  gboolean (*handle_find_group_by_id) (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    gint64 arg_id);

  gboolean (*handle_find_group_by_name) (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_name);

  const gchar * (*get_version) (groupAdmin *object);

  void (*group_added) (
    groupAdmin *object,
    const gchar *arg_user);

  void (*group_deleted) (
    groupAdmin *object,
    const gchar *arg_user);

};

GType group_admin_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *group_admin_interface_info (void);
guint group_admin_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void group_admin_complete_find_group_by_id (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    const gchar *group);

void group_admin_complete_find_group_by_name (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    const gchar *group);

void group_admin_complete_create_group (
    groupAdmin *object,
    GDBusMethodInvocation *invocation,
    const gchar *group);

void group_admin_complete_delete_group (
    groupAdmin *object,
    GDBusMethodInvocation *invocation);



/* D-Bus signal emissions functions: */
void group_admin_emit_group_added (
    groupAdmin *object,
    const gchar *arg_user);

void group_admin_emit_group_deleted (
    groupAdmin *object,
    const gchar *arg_user);



/* D-Bus method calls: */
void group_admin_call_find_group_by_id (
    groupAdmin *proxy,
    gint64 arg_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean group_admin_call_find_group_by_id_finish (
    groupAdmin *proxy,
    gchar **out_group,
    GAsyncResult *res,
    GError **error);

gboolean group_admin_call_find_group_by_id_sync (
    groupAdmin *proxy,
    gint64 arg_id,
    gchar **out_group,
    GCancellable *cancellable,
    GError **error);

void group_admin_call_find_group_by_name (
    groupAdmin *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean group_admin_call_find_group_by_name_finish (
    groupAdmin *proxy,
    gchar **out_group,
    GAsyncResult *res,
    GError **error);

gboolean group_admin_call_find_group_by_name_sync (
    groupAdmin *proxy,
    const gchar *arg_name,
    gchar **out_group,
    GCancellable *cancellable,
    GError **error);

void group_admin_call_create_group (
    groupAdmin *proxy,
    const gchar *arg_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean group_admin_call_create_group_finish (
    groupAdmin *proxy,
    gchar **out_group,
    GAsyncResult *res,
    GError **error);

gboolean group_admin_call_create_group_sync (
    groupAdmin *proxy,
    const gchar *arg_name,
    gchar **out_group,
    GCancellable *cancellable,
    GError **error);

void group_admin_call_delete_group (
    groupAdmin *proxy,
    gint64 arg_id,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean group_admin_call_delete_group_finish (
    groupAdmin *proxy,
    GAsyncResult *res,
    GError **error);

gboolean group_admin_call_delete_group_sync (
    groupAdmin *proxy,
    gint64 arg_id,
    GCancellable *cancellable,
    GError **error);



/* D-Bus property accessors: */
const gchar *group_admin_get_version (groupAdmin *object);
gchar *group_admin_dup_version (groupAdmin *object);
void group_admin_set_version (groupAdmin *object, const gchar *value);


/* ---- */

#define GROUP_TYPE_ADMIN_PROXY (group_admin_proxy_get_type ())
#define GROUP_ADMIN_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GROUP_TYPE_ADMIN_PROXY, groupAdminProxy))
#define GROUP_ADMIN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GROUP_TYPE_ADMIN_PROXY, groupAdminProxyClass))
#define GROUP_ADMIN_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GROUP_TYPE_ADMIN_PROXY, groupAdminProxyClass))
#define GROUP_IS_ADMIN_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GROUP_TYPE_ADMIN_PROXY))
#define GROUP_IS_ADMIN_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GROUP_TYPE_ADMIN_PROXY))

typedef struct _groupAdminProxy groupAdminProxy;
typedef struct _groupAdminProxyClass groupAdminProxyClass;
typedef struct _groupAdminProxyPrivate groupAdminProxyPrivate;

struct _groupAdminProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  groupAdminProxyPrivate *priv;
};

struct _groupAdminProxyClass
{
  GDBusProxyClass parent_class;
};

GType group_admin_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (groupAdminProxy, g_object_unref)
#endif

void group_admin_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
groupAdmin *group_admin_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
groupAdmin *group_admin_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void group_admin_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
groupAdmin *group_admin_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
groupAdmin *group_admin_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define GROUP_TYPE_ADMIN_SKELETON (group_admin_skeleton_get_type ())
#define GROUP_ADMIN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), GROUP_TYPE_ADMIN_SKELETON, groupAdminSkeleton))
#define GROUP_ADMIN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), GROUP_TYPE_ADMIN_SKELETON, groupAdminSkeletonClass))
#define GROUP_ADMIN_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), GROUP_TYPE_ADMIN_SKELETON, groupAdminSkeletonClass))
#define GROUP_IS_ADMIN_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), GROUP_TYPE_ADMIN_SKELETON))
#define GROUP_IS_ADMIN_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), GROUP_TYPE_ADMIN_SKELETON))

typedef struct _groupAdminSkeleton groupAdminSkeleton;
typedef struct _groupAdminSkeletonClass groupAdminSkeletonClass;
typedef struct _groupAdminSkeletonPrivate groupAdminSkeletonPrivate;

struct _groupAdminSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  groupAdminSkeletonPrivate *priv;
};

struct _groupAdminSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType group_admin_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (groupAdminSkeleton, g_object_unref)
#endif

groupAdmin *group_admin_skeleton_new (void);


G_END_DECLS

#endif /* __GROUP_GENERATED_H__ */
