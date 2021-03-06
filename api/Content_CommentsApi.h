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
 * Content_CommentsApi.h
 *
 * 
 */

#ifndef Content_CommentsApi_H_
#define Content_CommentsApi_H_


#include "ApiClient.h"

#include "CommentResource.h"
#include "PageResource«CommentResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Content_CommentsApi
{
public:
    Content_CommentsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Content_CommentsApi();
    /// <summary>
    /// Add a new comment
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; COMMENTS_USER or COMMENTS_ADMIN
    /// </remarks>
    /// <param name="commentResource">The comment to be added (optional)</param>
    pplx::task<std::shared_ptr<CommentResource>> addComment(std::shared_ptr<CommentResource> commentResource);
    /// <summary>
    /// Delete a comment
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; COMMENTS_USER or COMMENTS_ADMIN
    /// </remarks>
    /// <param name="id">The comment id</param>
    pplx::task<void> deleteComment(int64_t id);
    /// <summary>
    /// Return a comment
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="id">The comment id</param>
    pplx::task<std::shared_ptr<CommentResource>> getComment(int64_t id);
    /// <summary>
    /// Returns a page of comments
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="context">Get comments by context type</param>/// <param name="contextId">Get comments by context id</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«CommentResource»>> getComments(utility::string_t context, int32_t contextId, int32_t size, int32_t page);
    /// <summary>
    /// Update a comment
    /// </summary>
    /// <remarks>
    /// &lt;b&gt;Permissions Needed:&lt;/b&gt; COMMENTS_USER or COMMENTS_ADMIN
    /// </remarks>
    /// <param name="id">The comment id</param>/// <param name="content">The comment content (optional)</param>
    pplx::task<void> updateComment(int64_t id, std::shared_ptr<StringWrapper> content);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Content_CommentsApi_H_ */

