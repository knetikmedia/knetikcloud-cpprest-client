/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * UserRelationshipResource.h
 *
 * 
 */

#ifndef UserRelationshipResource_H_
#define UserRelationshipResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "SimpleUserResource.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  UserRelationshipResource
    : public ModelBase
{
public:
    UserRelationshipResource();
    virtual ~UserRelationshipResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// UserRelationshipResource members

    /// <summary>
    /// The child in the relationship
    /// </summary>
    std::shared_ptr<SimpleUserResource> getChild() const;
        void setChild(std::shared_ptr<SimpleUserResource> value);
    /// <summary>
    /// Context about the relationship or its type
    /// </summary>
    utility::string_t getContext() const;
    bool contextIsSet() const;
    void unsetContext();
    void setContext(utility::string_t value);
    /// <summary>
    /// A generated unique id. Read-Only
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// The parent in the relationship
    /// </summary>
    std::shared_ptr<SimpleUserResource> getParent() const;
        void setParent(std::shared_ptr<SimpleUserResource> value);

protected:
    std::shared_ptr<SimpleUserResource> m_Child;
        utility::string_t m_Context;
    bool m_ContextIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    std::shared_ptr<SimpleUserResource> m_Parent;
    };

}
}
}
}

#endif /* UserRelationshipResource_H_ */
