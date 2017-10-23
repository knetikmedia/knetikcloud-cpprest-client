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
 * CommentResource.h
 *
 * 
 */

#ifndef CommentResource_H_
#define CommentResource_H_


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
class  CommentResource
    : public ModelBase
{
public:
    CommentResource();
    virtual ~CommentResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CommentResource members

    /// <summary>
    /// The comment content of that resource
    /// </summary>
    utility::string_t getContent() const;
        void setContent(utility::string_t value);
    /// <summary>
    /// The type of object this comment applies to (ex: video, article, etc). Required when passed to /comments
    /// </summary>
    utility::string_t getContext() const;
    bool contextIsSet() const;
    void unsetContext();
    void setContext(utility::string_t value);
    /// <summary>
    /// The id of the object this comment applies to.  Required when passed to /comments
    /// </summary>
    int32_t getContextId() const;
    bool contextIdIsSet() const;
    void unsetContext_id();
    void setContextId(int32_t value);
    /// <summary>
    /// The date/time this resource was created in seconds since epoch
    /// </summary>
    int64_t getCreatedDate() const;
    bool createdDateIsSet() const;
    void unsetCreated_date();
    void setCreatedDate(int64_t value);
    /// <summary>
    /// The unique ID for that resource
    /// </summary>
    int64_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int64_t value);
    /// <summary>
    /// The summary of that resource
    /// </summary>
    utility::string_t getSummary() const;
    bool summaryIsSet() const;
    void unsetSummary();
    void setSummary(utility::string_t value);
    /// <summary>
    /// The date/time this resource was last updated in seconds since epoch
    /// </summary>
    int64_t getUpdatedDate() const;
    bool updatedDateIsSet() const;
    void unsetUpdated_date();
    void setUpdatedDate(int64_t value);
    /// <summary>
    /// The user who created the comment
    /// </summary>
    std::shared_ptr<SimpleUserResource> getUser() const;
    bool userIsSet() const;
    void unsetUser();
    void setUser(std::shared_ptr<SimpleUserResource> value);

protected:
    utility::string_t m_Content;
        utility::string_t m_Context;
    bool m_ContextIsSet;
    int32_t m_Context_id;
    bool m_Context_idIsSet;
    int64_t m_Created_date;
    bool m_Created_dateIsSet;
    int64_t m_Id;
    bool m_IdIsSet;
    utility::string_t m_Summary;
    bool m_SummaryIsSet;
    int64_t m_Updated_date;
    bool m_Updated_dateIsSet;
    std::shared_ptr<SimpleUserResource> m_User;
    bool m_UserIsSet;
};

}
}
}
}

#endif /* CommentResource_H_ */
